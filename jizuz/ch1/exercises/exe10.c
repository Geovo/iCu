#include <stdio.h>


// /|\PROGRESS: FINISHED

// here goes the main function

int main(int argc, char *argv[])
{
        // awesome code goes here:
	int c;

	while ((c = getchar()) != EOF)
		if (c == '\b')
			printf("\b");
		else if (c == '\t')
			printf("\t");
		else if (c == '\\')
			printf("\\");

        return 0;
}

