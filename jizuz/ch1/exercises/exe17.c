#include <stdio.h>
#define MAXLINE 1000 // Maximum input line size

// /|\PROGRESS: FINISHED

int getlino(char line[], int maxline);
void copy(char to[], char from[], int num);

// here goes the main function

int main(int argc, char *argv[])
{
        // awesome code goes here:
	int len, max;
	char line[MAXLINE];
	char longest[MAXLINE];
	
	max = 0;
	while ((len = getlino(line, MAXLINE)) > 0)
		if (len > 80) {
			copy(longest, line, max);
			max += 80;
			printf("%i", max);
		}
	if (max > 0) 	// There was a line
		printf("%s", longest);

        return 0;
}

// getlino, read a line into s, return length
int getlino(char s[], int lim)
{
	int c, i;
	
	for (i=0; i < lim-1 && (c = getchar()) != EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}


// copy from into 'to'

void copy(char to[], char from[], int num)
{
	int i;

	i = num;
	while ((to[i] = from[i]) != '\0')
		++i;
}
