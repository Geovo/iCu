#include <stdio.h>
#define MAXLINE 1000
#define MAXTEXT 10000

// /|\PROGRESS: DOING

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getlino(void);
void copy(void);

int main(int argc, char *argv[])
{
    int len;
    extern int max;
    extern char longest[MAXLINE];

    max = 0;
    while ((len = getlino()) > 0)
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0) 	// There was a line
        printf("%s", longest);

        return 0;
}

// getlino, read a line into s, return length
int getlino(void)
{
    int c, i;
    extern char line[];

    for (i=0; i < MAXLINE-1 && (c = getchar()) != EOF && c!='\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

// copy from into 'to'

void copy(void)
{
    int i;
    extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}
