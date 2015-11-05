#include <stdio.h>


// /|\PROGRESS: DOING

int lenstr(char str[]) {
	int i;
	for (i = 0; str[i] != '\0'; i++) {;}
	return i;
}

void expand(char s1[], char s2[]) {
	int i, len, j = 0;
	len = lenstr(s1);
	char rule[10]; // here we'll store our 'path'
	
	for (i = 0; i < len; i++) {
		if (s1[i] != '-')
			rule[j++] = s1[i];
	}
	rule[j] = '\0';

	char a;
	int b = 0;
	for (i = 0; rule[i] != '\0'; i++)
		for (a = rule[i]; a < rule[i+1]; a++)
			s2[b++] = a;
	
	s2[b++] = a; // set the last character

	s2[b] = '\0';
}

// here goes the main function

int main(int argc, char *argv[])
{
    // awesome code goes here:
	char test[] = "0-a-b-z";
	char s2[200];
	expand(test, s2);
	printf("%s\n", s2);
    
	return 0;
}

