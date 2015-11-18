#include <stdio.h>


// /|\PROGRESS: FINISHED

/*
 * Here we'll implement strcmp function, which compares two strings
 * with arrays and pointers 
 */

// the one with arrays:
int strcmp(char s[], char t[]) {
	int i;

	i = 0;
	while (s[i] == t[i])
		if (s[i++] == '\0')
			return 0;
	return s[i] - t[i]; // so if the string aren't equal, we return the first not-matching pair of characters subtracted
}

// the one with pointers
int strcmp_p(char *s, char *t) {
	for (; *s == *t; s++, t++)
		if (*s == '\0')
			return 0;
	return *s - *t;
}

int main(int argc, char *argv[])
{
        // awesome code goes here:


        return 0;
}

