#include <stdio.h>


// /|\PROGRESS: FINISHED


// some functions go here:
char lower(char c) {
    if (c >= 65 && c <= 90)
        c += 32;
    return c;
}


// here goes the main function

int main(int argc, char *argv[])
{
        // awesome code goes here:
        int c;
        while ((c = getchar()) != EOF)
            printf("%c", lower((char)c));

        return 0;
}
