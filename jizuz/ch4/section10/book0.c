#include <stdio.h>


// /|\PROGRESS: UNDONE

void printd(int n) {
	char s[10];
	int i;

	if (n < 0) {
		putchar('-');
		n = -n;
	}
	i = 0;
	do {
		s[i++] = n % 10 + '0'; // get next char
	} while ((n /= 10) > 0); // discard it
	while (--i >= 0)
		putchar(s[i]);
}

void printd_recursive(int n, int level) {
	int i;

	if (n < 0) {
		putchar('-');
		n = -n;
	}

//	printf("I'm on level: %i\n", level++);
	if ((i = n/10) != 0)
		printd(i);
	//printf("I'm on level: %i\n", level);
	putchar(n % 10 + '0');
}

// here goes the main function

int main(int argc, char *argv[])
{
    // awesome code goes here:
	printd(123);
	printd_recursive(123, 0);

    return 0;
}

