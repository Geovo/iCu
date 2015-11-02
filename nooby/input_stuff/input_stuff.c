#include <stdio.h>

int main() {
	int one, two, three;
	char info[10];
	puts("Getting input:");

	while (scanf("%i %i %i%9[^\n]", &one, &two, &three, info)) {
		printf("one is: %i\ntwo is: %i\nthree is: %i", one, two, three);
	}

	return 0;
}
