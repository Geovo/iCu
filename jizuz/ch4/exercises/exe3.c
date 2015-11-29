#include <stdio.h>
#define MAXBUF 1000
// Task: write ungets(s) - a function that should push back text to the input
// (e.g. a buffer)

// /|\PROGRESS: FINISH

// first, create a stack:
char buf[MAXBUF];
// and a stack pointer:
int bufp = 0;

// here it goes
void ungets (char s[]) {
    /*
     * An easy workaround here is to use ungetch (from the book)
     * and simply repeat it until we reach '\0' in s[]
     * the code goes this way here:
     * int i;
     * for (i = 0; s[i] != '\0')
     *     ungetch(s[i]);
     *
     * and that's it. But we'll just implement another way of doing this
     */
     // it's good to get the strlen of s
    int a = strlen(s);
    if (bufp + a > MAXBUF)
        printf("Sorry, but the buffer is already full.\n");
    else {
        int i;
        for (i = 0; s[i] != '\0'; i++)
            buf[bufp++] = s[i];
    }
}

int main(int argc, char *argv[])
{
        // awesome code goes here:


        return 0;
}
