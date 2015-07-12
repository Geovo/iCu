#include <stdio.h>


// /|\PROGRESS: FINISHED

// Let us copy input to output and replace spaces with a single space

int main(int argc, char *argv[])
{
        // awesome code goes here:
	int c;

	while ((c = getchar()) != EOF)
		if (c == ' ')
			printf(" \n");
		else
			printf("%c\n", c);

        return 0;
}

