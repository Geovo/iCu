#include <stdio.h>

int check_vowel(char a) 
{
	if(a >= 'A' && a <= 'Z')
	    a = a + 'a' - 'A'; // This converts a upper case letter to a lower case by adding 32 to lowercase

	if (a == 'a' || a == 'e' || a == 'o' || a == 'u' || a == 'i')
	    return 1;

	return 0; 
}

int main()
{
	char ch;
	printf("Input a character\n");
	scanf("%c", &ch);

	int n = check_vowel(ch);
	if (n == 1)
		printf("%c is a vowel.\n", ch);
	else
		printf("%c is NOT a vowel.\n", ch);

	return 0;
}
