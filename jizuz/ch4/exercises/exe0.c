#include <stdio.h>
#include "getlino.h"

//rindex TASK
// /|\PROGRESS: FINISHED

int my_rindex(char s[], char t) {
    int i, j, k;

    // get the last index
    for (i = 0; s[i] != '\0'; i++)
        ;

    for (; i > 0; i--) {
        if (s[i] == t)
            return i;
    }
    return -1;
}

// another way to find rindex:
int nu_rindex(char s[], char t[]) {
    int i, found = 0;

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == t)
            found = i;

    return found;
}

// here goes the main function

int main(int argc, char *argv[])
{
    // awesome code goes here:
    printf("%i\n", my_rindex("hello", 'o'));
    printf("%i\n", nu_rindex("hello", 'o'));

    return 0;
}
