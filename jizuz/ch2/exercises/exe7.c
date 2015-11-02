#include <stdio.h>


// /|\PROGRESS: FINISHED

// here goes the main function

int msb(int a) {
	// i thought it would be better to write another function for getting the position of
	// the MSB in a number
	int counter;
	for (counter = 0; a > 0; a >>= 1, counter++) {;}

	return counter;
}

int rightrot(int n, int b) {
	int a = n & ~(~0 << b);
	int num = msb(n);
	return (n >> b) + (a << (num - a));
}

int main(int argc, char *argv[])
{
    // awesome code goes here:
	printf("let's roll: %i rotated %i times --> %i\n", 18, 2, rightrot(18,2));

    return 0;
}

