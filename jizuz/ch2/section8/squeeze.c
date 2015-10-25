#include <stdio.h>


// /|\PROGRESS: FINISHED

void squeeze(char s[], int c)
{
	int i, j;
	
	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}


// here goes the main function

int main(int argc, char *argv[])
{
        // awesome code goes here:
        char str[] = "Hello there";
	printf("%s\n", str);
	squeeze(str, 'e');
	printf("%s\n", str);
        return 0;
}

