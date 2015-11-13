/* 
 * here you go, my friend! Have fun
 * and code the Cit out of the challenge!!! :D
 */

//|\ STATUS: FINISHED

#include <stdio.h>

void my_prime(int n) {
	if (n < 2) {
		return;
	} else if (n == 2) {
		puts("2");
		return;
	}
	int primes[n+1], i, j;

	/* First, we create an array of values up to n
	 * We assume that every number up to n is a prime number
	 */
	primes[0] = primes[1] = 0; // because 0 and 1 are not prime

	for (i = 2; i <= n+1; i++)
		primes[i] = 1;

	// now comes the fun part
	for (i = 2; i <= n; i++) {
		if (primes[i] == 1)
			for (j = 2; i * j <= n; j++)
				primes[i*j] = 0;
	}

//	printf("%i\n", primes[n]);

	printf("2");
	// now, loop through all the primes
	for (i = 3; i < n; i++)
		if (primes[i] == 1)
			printf(",%i", i);

	printf("\n");
}


int main(int argc, const char * argv[]) {
    FILE *file = fopen(argv[1], "r");
    char line[1024];
    while (fgets(line, 1024, file)) {
  	  // Do something with the line
		int i, j, linenum = 0;
		char cnum[15];

		
		for (i = 0; line[i] >= '0' && line[i] <= '9'; i++)
			linenum = linenum * 10 + line[i] - '0'; 

		// now that linenum is the right number, we just call our prime method
		my_prime(linenum);
    }
    return 0;
}
