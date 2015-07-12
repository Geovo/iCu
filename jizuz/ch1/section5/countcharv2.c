#include <stdio.h>


// /|\PROGRESS: FINISHED

// Counting the chars with a for loop

int main(int argc, char *argv[])
{
        // awesome code goes here:
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		; //  it could also be here ^  . It means an empty body
	printf("%.0f\n", nc);

        return 0;
}

