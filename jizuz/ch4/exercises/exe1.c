#include <stdio.h>


// /|\PROGRESS: FINISHED

double atof(char s[]) {
    // convert string to double and handle scientific notation
    double val, power;
    int i, sign;

    for (i = 0; s[i] == ' ' || s[i] == '\n' || s[i] == '\t'; i++)
        ; // skip white space

    sign = 1;
    if (s[i] == '+' || s[i] == '-') // handle the sign
        sign = (s[i++] == '+') ? 1 : -1;
    for (val = 0; s[i] >= '0' && s[i] <= '9'; i++)
        val = 10 * val + s[i] - '0';
    if (s[i] == '.')
        i++;
    // here we actually get to the after dot part
    // so we actually just count how many digits we have and in the end
    // we divide val through power
    // to include scientific notation such as 4.45e-6
    // we also need to first count the number of digits(e.g. power)
    for (power = 1; s[i] >= '0' && s[i] <= '9'; i++) {
        val = 10 * val + s[i] - '0';
        power *= 10;
    }
    int nu_sign, scientific = 0, nu_pow = 0;
    if (s[i] == 'e' || s[i] == 'E') {
        nu_sign = s[++i] == '-' ? -1 : 1;
        scientific = 1;
        i++;
    }

    if (scientific)
        for (; s[i] >= '0' && s[i] <= '9'; i++)
            nu_pow = 10 * nu_pow + s[i] - '0';

    double x = 1;
    for (; nu_pow > 0; nu_pow--)
        x *= 10;

    // now move the scientifically noted power to our current power
    power += (x * sign);
    // here we actually return the value
    return sign * val / power;

}

int main(int argc, char *argv[])
{
    // awesome code goes here:
    printf("%f\n", atof("123.45e-6"));

    return 0;
}
