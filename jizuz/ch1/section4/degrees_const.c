#include <stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20

// /|\PROGRESS: FINISHED 

// Print Fahrenheit-Celsius
// for 0, 20, ..., 300 degrees
int main(int argc, char *argv[])
{
        // awesome code goes here:
	float fahr, celsius;

	for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
	}

        return 0;
}


