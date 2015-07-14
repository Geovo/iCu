#include <stdio.h>

// /|\PROGRESS: FINISHED

// here we count digits, whitespace, others

int main(int argc, char *argv[])
{
    // awesome code goes here:
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i < 10; i++)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9') // a tricky way to use chars as numbers
			++ndigit[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else if (c == '-')
			break;
		else
			++nother;

	printf("digits = ");
	for (i = 0; i < 10; i++)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n", nwhite, nother);

        return 0;
}

