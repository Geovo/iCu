#include <stdio.h>
#define MAX_WILDCARD 20


int s_len(char *s) {
	int i;
	for (i = 0; *s != '\0'; s++, i++)
		;
	return i;
}

int str_eq(char *p, char substr[]) {
	char *c = p;
	for (int i = 0; *c != '\0'; c++, i++) {
		if (*c != substr[i])
			return 0;
	}
	return 1; // no interrupts if it's a match
}

int compare_str(char *wildcard, char *check) {
	printf("===================================\nTesting with %s and %s\n", wildcard, check);
	char *wc = wildcard;
	int i; // get the position of the substring
	char substr[MAX_WILDCARD];
	int escape = 0;
	for (i = 0; *wc != '\0'; i++, wc++) {
		if (*wc == '*' && *(wc-1) != '\\') {
			break;
		}
		substr[i] = *wc;
	}	
	substr[i++] = '\0';

	// check if *wc is now '\0', because that means that no '*' was found
	if (*wc == '\0') {
		printf("Couldn't find any asterisk\n===============================================\n");
		return 0;
	}
	/*
	 * If code below runs well, then the beginning of check and wildcard match
	 */
	//printf("substr: %s\n", substr);
	char *ch = check;
	for (int j = 0; j < i-1; j++) {
		if (*(ch+j) != substr[j])
			return 0;
	}

	//printf("matching substr: %s\n", substr);
	// if it returned 0, then the string is not a substring of the wildcard
	// so, if the program still runs, we are at position i (where the * is)
	// and now we have to check if there is any string in place of the asterisk

	ch = wildcard + i;
	int j;
	for (j = 0; *ch != '\0'; j++, ch++)
		substr[j] = *ch;
	substr[j] = '\0';
	
	// now we should have a new substr
	char ast[100];
	// so now we have the last characters after the asterisk in substr
	ch = check + i - 1;

	int subl = s_len(substr);
	int subp = s_len(ch);
//	printf("subl: %i | subp: %i\n", subl, subp);
	for (j = 0; *ch != '\0'; ch++, j++, subp--) {
	//printf("subl: %i | subp: %i\n", subl, subp);
		if (subp <= subl) {
			if(str_eq(ch, substr)) {

	//	printf("Calling str_eq with %p and %s\n", ch, substr);
				ast[j] = '\0';
				printf("Hey, that's valid!\nInstead of the asterisk in %s we have %s\n=============================\n", wildcard, ast);
				return 1;
			}
		}
		ast[j] = *ch;
		
	}
	ast[j] = '\0';

//	printf("ast: %s\n", ast);
	printf("Sorry, but the strings don't match\n===========================================\n");
	return 0;
}

int main() {
	compare_str("h*llo", "heeello");
	compare_str("How*are you?", "How the fuck are you?");
	compare_str("h*llo", "hlo");
	compare_str("D*ck", "Dick");
	compare_str("D*ckie\*", "Dickie*");

	return 0;
}
