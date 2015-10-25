// kommandointerpreter1.c
// Dieses Programm simuliert eine Kommandozeile mit 2 funktionen
// [date, ls]

#include <stdio.h>
#include <stdlib.h>

int main() {
  static char *command[] = {"date", "ls"};
  int zahl;

  // Die Nummern entsprechen den Positionen im Array
  printf("\n Bitte geben Sie eine Zahl ein: ");
  printf("\n 0 = date, 1 = ls: ");
  scanf("%i", &zahl);
  
  // execlp erwartet die Argumente als Liste. Es wird in diesem Fall
  // nur der Name des Kommandos benoetigt
  execlp(command[zahl], command[zahl], 0);

  // execlp erfolglos
  printf("\n Falsche Zahl. Kein Kommando verfügbar.");

  return 0;
} 
