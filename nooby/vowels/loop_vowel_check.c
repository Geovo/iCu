#include <stdio.h>
#include <stdlib.h>

void smash(char *msg)
{
	printf("%s\n", msg);
	exit(1);
}


int check_vowel(char a) 
{
	if(a >= 'A' && a <= 'Z')
	    a = a + 'a' - 'A'; // This converts a upper case letter to a lower case by adding 32 to lowercase

	if (a == 'a' || a == 'e' || a == 'o' || a == 'u' || a == 'i')
	    return 1;

	return 0; 
}

void print_out(int num, char ch)
{
	if (num == 1)
		printf("%c is a vowel\n", ch);
	else
		printf("%c is NOT a vowel\n", ch);
}


int main(int argc, char *argv[])
{
	if (argc != 2)
		smash("Nope, you need to pass in a number of times you want to loop");
	
	char ch;
	int i = 0;
	int *times = &argv[1];

	while(i < times){	
		printf("Input a character\n");
		scanf("%c", &ch);
		i++;
		print_out(check_vowel(ch), ch);
	}

	return 0;
}

