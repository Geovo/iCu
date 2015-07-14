#include <stdio.h>


// /|\PROGRESS: FINISHED

// Copy input to output ( VERSION 1 )

int main(int argc, char *argv[])
{
    // awesome code goes here:
	// here goes an int, because we need an object big enough to store EOF
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		if (c == '-')
			break;		
		c = getchar();
	}

        return 0;
}

