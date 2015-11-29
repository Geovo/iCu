#include <stdio.h>


// /|\PROGRESS: FINISHED

// for this one we'll just assume, that there is enough space in the first string
// because we're going to write a program called strcat(s, t) which concatenates
// two string (adds t to the end of s)
void my_strcat(char *s, char *t) {
    char *c = s;
    char *b = t;
    while (*c != '\0')
        c++;
    while (*b != '\0') {
        *c = *b;
        c++;
        b++;
    }
}

// here goes the main function

int main(int argc, char *argv[])
{
    // awesome code goes here:
    char a[20];
    a[0] = 'S';
    a[1] = '\0';
    char *b = "hello";
    my_strcat(a, b);
    printf("%s\n", a);
    return 0;
}
