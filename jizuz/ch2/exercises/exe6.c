#include <stdio.h>


// /|\PROGRESS: FINISHED

// here goes the main function

int main(int argc, char *argv[])
{
    // awesome code goes here:
	int tester = 1, behind = 0;
	for (; tester > behind; behind++, tester++){ ;}

	printf("%i  %i\n", behind, tester);

	// now that we have the biggest possible int, we can shift it until it reaches 0
	int counter = 0;
	for (; behind > 0; behind >>= 1) {counter++;}

	printf("%i  %i and the count --> %i\n", behind, tester, counter);
    return 0;
}

