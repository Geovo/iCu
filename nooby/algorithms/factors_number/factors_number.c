#include <stdio.h>
#include <math.h>
#define MAXINP 1000

void factors(int n, int factors[]) {
	int i, j, a;

	i = 0;
	// here we add 1 and n to the array, as every number
	// can be divided by 1 and itself
	factors[i++] = 1;
	factors[i++] = n;

	/* 
	 * Get the sqrt of n and run the loop from j to sqrt(n)
	 */
	double x;
	x = sqrt((double) n);
	for (j = 2; j < x; j++)
		if (n % j == 0) {
			factors[i++] = j;
			// if j isn't sqrt(n) - add j and n/j (as the product of both equals n)
			if (j != x)
				factors[i++] = n / j;
		}
}

int main() {
	int tests[MAXINP], i;

	for (i = 0; i < MAXINP; i++)
		tests[i] = 0;
	factors(12, tests);

	for (i = 0; tests[i] != 0; i++)
		printf("%i ", tests[i]);
	
	printf("\n");
}
