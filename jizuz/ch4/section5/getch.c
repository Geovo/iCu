#include <stdio.h>

// /|\PROGRESS: UNDONE

#define BUFSIZE 100

char buf[BUFSIZE]; // buffer for ungetch
int bufp = 0; // next free position in buf

int getch() {
	// get a (possibly pushed back) character
	return ((bufp > 0) ? buf[--bufp] : getchar());
}

void ungetch(int c) {
	// push character back on input
	if (bufp > BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}


int main(int argc, char *argv[])
{
        // awesome code goes here:
	int c;
	while ((c = getch()) != EOF) {
	//	if (c >= '0' && c <= '9')
			printf("%c", c);
		if (c < '0' && c > '9')	
			ungetch(c);
	
		//printf(
	}

        return 0;
}

