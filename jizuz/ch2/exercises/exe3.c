#include <stdio.h>

// /|\PROGRESS: FINISHED

void squeeze(char s[], char c[]) {
	int i, j, z = 0, check = 0;
	char letters[32];

	// don't keep the array empty
	for (i = 0; i < 32; i++)
		letters[i] = 0;

	// populate the letters array
	// start outter loop
	for (i = 0; c[i] != '\0'; i++) {
		check = 0;
		// this is the inner loop
		// which checks for repeatin chars
		for (j = 0; j < 32; j++)
			if (c[i] == letters[j]) {
				check = 1;
				break;
			}
		if (check != 1)
			letters[z++] = c[i];
	}

//	for (i = 0; i < 32; i++)
//		printf("%c", letters[i]);


	check = 0;

	int a, b;
	// now delete all chars
	for (a = b = 0; s[a] != '\0'; a++) {
		check = 0;
		for (i = 0; i < 32; i++) {
			if( s[a] == letters[i])
				check = 1;
		}	
		if (check == 0)
			s[b++] = s[a];
		
	}
	
		// without this the string will contain useless chars
		s[b] = '\0';
} 

// here goes the main function

int main(int argc, char *argv[])
{
        // awesome code goes here:
		char me[] = "Hello there";
		char del[] = "okey";
		squeeze(me, del);
		printf("%s\n", me);

        return 0;
}

