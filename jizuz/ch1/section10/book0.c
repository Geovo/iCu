#include <stdio.h>

#define MAXLINE 1000

char line[MAXLINE];
char save[MAXLINE];
int max;

int main() {
    int len;
    extern int max;
    extern char save[];

    max = 0;
    while ((len = getline()) > 0)
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0)
        printf("%s", save);
}

void getline() {
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE - 1 && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}
