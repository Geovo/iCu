#include <stdio.h>


// /|\PROGRESS: FINISHED 

// Print Fahrenheit-Celsius
// for 0, 20, ..., 300 degrees
int main(int argc, char *argv[])
{
        // awesome code goes here:
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; // lower limit
	upper = 300; // upper limit
	step = 20; // step size

	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius += step;
	}

        return 0;
}


