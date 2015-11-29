#include <stdio.h>


// /|\PROGRESS: UNDONE

// let's write a recursive atoi
void my_itoa(int n, char s[], int p) {
    int i;

    if (n < 0) {
        s[p++] = '-';
        n = -n;
    }

    if ((i = n/10) != 0) {
        s[p++] = n + '0';
        printf("%c\n", s[p-1]);
        my_itoa(i, s, p);
    }

    s[++p] = i % 10 + '0';
    s[++p] = '\0';
}

int main(int argc, char *argv[])
{
    // awesome code goes here:
    //printd(20);
    char nu[20];
    int p = 0;
    my_itoa(100, nu, p);
    printf("%s\n", nu);

        return 0;
}
