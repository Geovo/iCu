#include <stdio.h>


// /|\PROGRESS: UNDONE

double atof(char s[]) {
    // convert string to double and handle scientific notation
    double val, power;
    int i, sign;

    for (i = 0; s[i] == ' ' || s[i] == '\n' || s[i] == '\t'; i++)
        ; // skip white space

    sign = 1;
    if (s[i] == '+' || s[i] == '-') // handle the sign
        sign = (s[i++] == '+') ? 1 : -1;
    //for (val = 0; s[i] = )
}

int main(int argc, char *argv[])
{
        // awesome code goes here:


        return 0;
}
