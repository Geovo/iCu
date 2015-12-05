#include <stdio.h>


// /|\PROGRESS: FINISHED

char tolowerme(char c) {
	if (c >= 'A' && c <= 'Z')
		c += 32;
	
	return c;
}

// here goes the main function

int main(int argc, char *argv[])
{
    // awesome code goes here:
//	printf("G - 32: %c - %i || G: %i || g: %i\n", 'G' - 32, 'G' - 32, 'G', 'g');
	int c;
	while ((c = getchar()) != EOF)
		putchar(tolowerme(c));

    return 0;
}

