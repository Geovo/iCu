// pipe.c

// Dieses Programm ermöglicht die Kommunikation zwischen zwei Prozessen:
// Der Vaterprozess erzeugt zwei Sohnprozesse, von denen der eine who
// aufruft und der andere die Ausgabe des ersten mit sort sortiert.
// Dazu muss die Ausgabe von who, die normalerweise auf der
// Standardausgabe erfolgt, mit der Eingabe von sort verbunden werden.
// Mit anderen Worten: Es wird das Shell-kommando who | sort simuliert.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    // Im Array pipe_verbindung werden 2 Filedeskriptoren gespeichert, die
    // von der funktion pipe initialisiert werden. Dabei ist
    // pipe_verbindung[1] für das Schreiben in die Pipe
    // un pipe_verbindung[0] für das Lesen zuständig.

    int pipe_verbindung[2];
    pipe(pipe_verbindung);

    // Erzeugung des ersten Sohnprozesses
    if (fork() == 0) {
        // Die Funktion dup2 verbindet den einen Filedeskriptor der Pipe
        // mit dem Filedeskriptor der Standardausgabe 1.
        dup2(pipe_verbindung[1], 1);

        // Der ebenfalls an diese Funktion vererbte, aber nicht benötigte
        // Filedeskriptor für das Lesen aus der Pipe wird geschlossen.
        close(pipe_verbindung[0]);

        // Jetzt wird das Kommando who ausgeführt. Die Standardausgabe, auf
        // die das Programm schreibt, ist mit der Pipe verbunden.
        execlp("who", "who", 0);
    }

    // Erzeugen des zweiten Sohnprozesses
    else if (fork() == 0) {
        // Hier arbeitet der zweite Sohnprozess. Auch hier werden zwei
        // Filedeskriptoren verbunden, die 0 der Standardeingabe mit dem
        // für das Lesen aus der Pipe.
        dup2(pipe_verbindung[0], 0);

        // Analog zu oben wird der nicht benötigte Filedeskriptor
        // geschlossen.
        close(pipe_verbindung[1]);

        // Das Kommando sort wird ausgeführt, das jetzt aus der Pipe liest.
        execlp("sort", "sort", 0);
    }

    // der Vaterprozess
    else {
        // Der Vaterprozess muss weder schreiben noch lesen, er schließt
        // deshalb alle Filedeskriptoren.
        close(pipe_verbindung[0]);
        close(pipe_verbindung[1]);

        // Da der Vaterprozess 2 Söhne erzeugt hat, muss er auf die
        // Terminierung beider Prozesse warten.
        wait(0);
        wait(0);
    }

    return 0;
}
