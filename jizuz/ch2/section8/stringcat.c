#include <stdio.h>


// /|\PROGRESS: FINISHED

// strcats: concatenate two strings
void strcats(char s[], char t[])
{
	int i, j;

	i = j = 0;
	while (s[i] != '\0')
		i++;
	while ((s[i++] = t[j++]) != '\0')  /* copy t */
		;  /* Do nothing here! */
}

int main(int argc, char *argv[])
{
        // awesome code goes here:
        char h[] = "hello "; /* Had to struggle a bit! I actually change the first string */
	strcats(h, "world!");
	printf("%s\n", h);
        return 0;
}

