#include <stdio.h>


// /|\PROGRESS: FINISHED 

// Print Fahrenheit-Celsius
// for 0, 20, ..., 300 degrees
// WITH HEADING:
int main(int argc, char *argv[])
{
        // awesome code goes here:
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; // lower limit
	upper = 300; // upper limit
	step = 20; // step size
	
	printf("The Fahrenheit-Celsius table in range 0..300\n");

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}

        return 0;
}


