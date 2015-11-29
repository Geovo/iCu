#include <stdio.h>


// /|\PROGRESS: FINISHED

// here goes reverse(s) with using pointers

void my_reverse(char *s) {
    int e = 0;
    for (; s[e] != '\0'; e++)
        ; // get the last char

    char *x = (s+e-1); // let x point to the last char in the string

    int count = 0;
    for(; &(*x) >= &(*s); x--, s++ /*&& ++count < e/2 + 1*/) {
        char temp = *x;
        *x = *s;
        *s = temp;
    }
}

int myatoi(char *s) {
    while (*s == ' ' || *s == '\n' || *s == '\t')
        s++; // skip white space

    int ret = 0;
    while (*s >= '0' && *s <= '9') {
        ret = 10 * ret + *s - '0';
        s++;
    }

    return ret;
}

void myitoa(char *s, int n) {
    int power = 1;
    char *c = s; // just to be able to revert the whole string afterwards
    while (n > 0) {
        *s = n % 10 + '0';
        n /= 10;
        s++;
    }
    *++s = '\0';
    my_reverse(c); // now reverse the whole string
}

void mystrcpy(char *d, char *s) {
    while ((*d++ = *s++))
        ; // do nothing here :)
}

int myindex(char *s, char *t) {
    int r = 0;
    while (*s++ != *t)
        r++;
    return r;
}

// here goes the main function

int main(int argc, char *argv[])
{
    // awesome code goes here:
    char *s = "hello there!";
    char x[20];
    mystrcpy(x, s);
    my_reverse(x);

    printf("%s\n---------------------\n", x);
    char z[] = "184";
    printf("%i\n", myatoi(z));

    char a[10];
    myitoa(a, 192);
    printf("%s\n", a);

    char h[] = "Kristian";
    int res = myindex(h, "s");
    printf("s is at position %i in 'Kristian'\n", res);

    return 0;
}
