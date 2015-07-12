#include <stdio.h>


// /|\PROGRESS: FINISHED 

// Print Fahrenheit-Celsius
// for 0, 20, ..., 300 degrees
int main(int argc, char *argv[])
{
        // awesome code goes here:
	int fahr, celsius, lower, upper, step;

	lower = 0; // lower limit
	upper = 300; // upper limit
	step = 20; // step size

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr += step;
	}

        return 0;
}

