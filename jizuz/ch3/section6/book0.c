#include <stdio.h>


// /|\PROGRESS: FINISHED

void itoa(int n, char s[]) {
	int i, sign;

	if ((sign = n) < 0)
		n = -n;
	i = 0;
	do {   /* generate digits in reverse order */
		s[i++] = n % 10 + '0';  // get next digit
	} while ((n /= 10) > 10); /* delete it */
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

int main(int argc, char *argv[])
{
	

    return 0;
}

