#include <stdio.h>
#include <stdlib.h>

void table(int beg, int fin, int step) {
	double cels, f;
	cels = (double)beg;
	f = (double)fin;
	printf("--------------------------------\n");
	for (; cels < f; cels += step) {
		printf("%10f\t%10f\n", cels, cels*(9/5) + 32); 
	}
}

int main() {
	int cels, fahr, beg, fin, step;
	printf("Please give in a lower limit, limit >= 0: ");
	scanf("%d", &beg);

	printf("Please give in an upper limit, 10 > limit <= 50000: ");
	scanf("%d", &fin);

	printf("Please give in a step, 0 < step <= 10: ");
	scanf("%d", &step);
	
	table(beg, fin, step);

	return 0;
}
