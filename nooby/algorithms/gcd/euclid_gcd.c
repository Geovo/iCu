#include <stdio.h>

int euclid_gcd(int a, int b) {
	int dividend = a >= b ? a : b;
	int divisor = a <= b ? a : b;
	while (divisor != 0) {
		int remainder = dividend % divisor;
		dividend = divisor;
		divisor = remainder;
	}
	return dividend;
}

int main() {
	printf("gcd of 400 and 303 is %i\n", euclid_gcd(400, 303));

	return 0;
}
