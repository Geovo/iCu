#include <stdio.h>

int fact(int to) {
	int a = to / 25;
	return to / 5 + a;
}

int main() {
	int d;
	printf("Enter a number: ");
	(scanf("%i", &d));
	printf("Great, the result is -> %i\n", fact(d));

	return 0;
}
