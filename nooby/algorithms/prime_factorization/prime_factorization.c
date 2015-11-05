#include <stdio.h>
#include <math.h>

void prime_factors(int n, char s[]) {
	// we will output the factors in this format: "2 x 2 x 3 x 5..."
	int i, j = 0, c = 0, a = 0;
	double x = sqrt((double) n);

	for (i = 2; i < x; i++) {
		if (n % i == 0) {
			c = 0;
			while (n % i == 0) {
				n /= i;
				c++;
			}
		// here we do the outputting part
			for (; c > 0; c--) {
				s[a++] = i + '0';
				s[a++] = ' ';
				s[a++] = 'x';
				s[a++] = ' ';
			}
		}
	}
	if (n != 1) {
		s[a++] = n;
		s[a] = '\0';
	} else
		s[a-2] = '\0';
}

int main() {
	char test[100];
	prime_factors(12, test);

	printf("%s\n", test);

	return 0;
}
