#include <stdio.h>


// /|\PROGRESS: UNDONE

// we'll need the reverse function for both itob and itoh
void reverse(char str[]) {
	int i,j, temp;
	for (i = 0; str[i] != '\0'; i++) {;} // here we got the size of str
 	i--;	
	for (j = 0; j < i; j++, i--) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

// let's do itob first
void itob(unsigned int n, char s[]) {
	int i = 0;
	for (; n > 0; n /= 2) {
		s[i++] = (n % 2) + '0';
	}

	s[i] = '\0';
	reverse(s);
}

// let's move on with itoh
void itoh(unsigned int n, char s[]) {
	int i = 0;
	for (; n > 0; n /= 16)
		s[i++] = (n % 16) + '0';
	
	reverse(s);
}
// here goes the main function

int main(int argc, char *argv[])
{
    // awesome code goes here:
	unsigned int r = 16;
	char s[10];
	itob(r, s);
	printf("%s\n", s);

	char t[] = "Hello";
	reverse(t);
	printf("%s\n------------- ATOH -------", t);
	char s2[20];
	unsigned int a = 41;
	itoh(a, s2);
	printf("\n%s\n", s2);

    return 0;
}

