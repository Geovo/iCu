#include <stdio.h>
#define MAXS 100

// /|\PROGRESS: FINISHED

// we did something similar before
// and now we'll simply use pointers for the same task

double getfloat(char *pt) {
    double c = 0;
    int sign;
    char *cp = pt;

    while (*cp == ' ' || *cp == '\n' || *cp == '\t')
        cp++; // skip the white space

    // add the right sign
    sign = 1;
    if (*cp == '+' || *cp == '-') {
        sign = (*cp == '+') ? 1 : -1;
        cp++;
    }

     //grab the left part
    for (; *cp >= '0' && *cp <= '9'; cp++) {
        c = 10 * c + *cp - '0';
    }

    // let's get the dot
    int power = 1;
    if (*cp == '.')
        for (++cp; * cp >= '0' && *cp <= '9'; cp++) {
            c = 10 * c + *cp - '0';
            power *= 10;
        }
    c *= sign;

    return c / power;
}


// here goes the main function

int main(int argc, char *argv[])
{
    // awesome code goes here:
    printf("%f\n", getfloat(" -123.981"));

    return 0;
}
