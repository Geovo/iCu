#include <stdio.h>


// /|\PROGRESS: FINISHED

/*
 * Here we simply write out a strcpy function
 * which copies a string into another string
 * There will be two separate functions
 * in one we'll use arrays, in the other one - pointers
 */

// this one uses arrays
void strcpy_ary(char s[], char t[]) {
	int i;

	i = 0;
	while ((s[i] = t[i]) != '\0')
		i++;
}

// this one uses pointers
void strcpy_pointers(char *s, char *t) {
	while ((*s = *t) != '\0') {
		s++;
		t++;
	}
}

int main(int argc, char *argv[])
{
        // awesome code goes here:


        return 0;
}

