#include <stdio.h>

int sumit(char *s, int base, char low) {
	char *p = s;
	int res = 0;
	for (; *p != '\0'; p++) {
		res = res * base + *p - low;
	}
	printf("sum of %s is --> %i\n", s, res);
	return res;
}

int incr(char *s, char *nums, int base) {
	char low = *nums; // get lowest "number"


	return 0;
}

void perms(char *s) {
	int len = 0;
	char *p = s;
	for (; *p != '\0'; p++, len++)
		; // get the length

	
}

int main() {
	/*
	char s[] = {'o','o','o'};
	printf("%i\t%s\n", s[0] + s[1] + s[2], s);

	char x[] = {'o','o','p'};
	printf("%i --> %c\n", 'p', 'p');
	printf("%i\t%s\n", x[0] + x[1] + x[2], x);
	*/
	char *s = "opo";
	char *t = "opp";
	sumit(s, 2, 'a');
	sumit(t, 2, 'a');
	return 0;
}
