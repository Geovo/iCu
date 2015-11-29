#include <stdio.h>


// /|\PROGRESS: FINISHED

/*
 * This one is easy
 * We just use one single char as buffer instead of a stack
 */

char buf;

char getch() {
    char temp;
    temp = buf == 0 ? getchar() : buf;
    buf = 0;
    return temp;
}

void ungetch(int c) {
    // this one is very simple :)
    buf = c;
}
int main(int argc, char *argv[])
{
        // awesome code goes here:


        return 0;
}
