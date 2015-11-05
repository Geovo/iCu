#include <stdio.h>

int my_prime(int n) {
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

//	for (i = 0; i < n+1; i++)
//		printf("%i prime --> %i\n", i, primes[i]);
	return primes[n];
}

int main() {
	int i;
//	int test[] = {4,9,10,15,11,13513,1234,1122,99,97};

	my_prime(123);
//	for (i = 0; i < 10; i++)
//		printf("%i is%sa prime\n", test[i], my_prime(i) == 1 ? " " : " not "); 
		printf("%i is%sa prime\n", 15, my_prime(15) == 1 ? " " : " not ");

	return 0;
}
