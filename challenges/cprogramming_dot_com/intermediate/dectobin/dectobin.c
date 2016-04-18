#include <stdio.h>
#include <stdlib.h>
/*
 * This one is fairly simple: take a number (or multiple numbers) from command-line (argv) and 
 * print out their binary value.
 */

void reverse(char num[]) {
	int i;
	char *n = num;
	for (i = 0; *n != '\0'; n++, i++)
		; 		// now n is at the terminating null in num
	i--; 		// set n one char back
				// in i we have the number of chars in the string

	for (int j = 0; j <= i; j++, i--) {
		char tmp = num[j];
		num[j] = num[i];
		num[i] = tmp;
	}
//	printf("reversed: %s\n", num);
}

char *dectobin(int num) {
	if (num == 0)
		return "0";
	else if (num == 1)
		return "1";
	int i;
	// let's get the needed bits for the num
	for (i = num; i > 0; i /= 2)
		;
	char res[i + 2]; // just with one place for the terminator and 1 buffer place
	int j;
	for (j = 0; num > 0; j++, num /= 2) {
//		printf("num is: %i\n", num);
		res[j] = (char)((num % 2) + '0');
//		printf("res[j]: %c\n", res[j]);
	}
	res[j] = '\0';
	reverse(res);
//	printf("%s\n", res);
	char *p = res;
	return p;
}

int main(int argc, char *argv[]) {
	for (int i = 0; i < 50; i++)
		printf("%6i || %s\n", i, dectobin(i));
	return 0;
}
