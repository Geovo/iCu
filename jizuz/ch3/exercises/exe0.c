#include <stdio.h>


// /|\PROGRESS: FINISHED

// here goes the expand function which makes '\t' and '\n' appear as literals in a string
void expand(char s[], char t[]) {
	int i, j = 0;

	/*
	 * first, we loop through 's'
	 * then we search for \n escapes and replace them with \ and n, so it has not one
	 * but two characters
	 */
	 for (i = 0; s[i] != '\0'; i++) {
		switch(s[i]) {
		case '\n':
			t[j++] = '\\';
			t[j++] = 'n';
		case '\t':
			t[j++] = '\\';
			t[j++] = 't';
		default:
			t[j++] = s[i];
		}
	 }
	 t[j] = '\0';
	 printf("%s\n", t);
}

// here goes the main function

int main(int argc, char *argv[])
{
    // awesome code goes here:
	char s[] = "Hello there!\nWhat's \tup?";
	char t[40];

	expand(s, t);

    return 0;
}

