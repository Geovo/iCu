#include <stdio.h>

long double fact(int to) {
	if (to <= 0)
		return -1.0;
	if (to < 2)
		return (long double)to;
	
	long double res = 1;
	while (to > 0) {
		res *= to;
//		printf("res: %Lf\n", res);
		to--;
	}
	return res;
}

int main() {
	int d;
//	printf("Enter a number: ");
//	(scanf("%i", &d));
//	printf("Great, the result of %i! is -> %i\n", d, fact(d));
	for (int i = 0; i <= 100; i++)
		printf("%4i! -> %.0Lf\n", i, fact(i));

	long double t = 15511210043330985984000000;
	printf("%Lf\n", t * 26);
//	long double t = 1;
//	t++;
	//printf("TEST: %Lf\n", t);
	return 0;
}
