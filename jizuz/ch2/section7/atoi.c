#include <stdio.h>

/* This works simply: a char is actually a number and it always gets its reference from the encoding table (ASCII 
in most cases). So to get the number 9 from char '9' we have to do this:
'9' - '0' == 9  
Actually pretty neat :)
*/

// /|\PROGRESS: FINISHED

int altoi(char l[]);

// here goes the main function

int main(int argc, char *argv[])
{
        // awesome code goes here:
	int res = altoi("12345");
	printf("%i\n", res);
	printf("Proof it's an int: 100000 - res --> %i\n", 100000 - res);

        return 0;
}

/* altoi: the same as atoi */
int altoi(char s[])
{
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}
