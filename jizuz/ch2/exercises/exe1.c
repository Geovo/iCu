#include <stdio.h>


// /|\PROGRESS: FINISHED
// This is ugly and pointless code, but I did it :) 

// here goes the main function

int main(int argc, char *argv[])
{
        // awesome code goes here:
	// This will not be 'good' code :)
	int i = 0, c = '0', lim = 10000;
	char s[lim];
	while ((c = getchar()) != '\n') {
		if (i >= lim - 1)
			break;
		if (c != EOF)
			s[i] = c;
		else if (c != '\n')
			s[i] = c;
		i++;
	}
	printf("%s\n", s);

        return 0;
}

