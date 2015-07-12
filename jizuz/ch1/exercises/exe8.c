#include <stdio.h>


// /|\PROGRESS: FINISHED

// this will count blanks, tabs and newlines

int main(int argc, char *argv[])
{
        // awesome code goes here:
	int blank, tabs, newlines, c;

	while ((c = getchar()) != EOF){
		if (c == ' ') {
			++blank;
		} else if (c == '\t') {
			++tabs;
		} else if (c == '\n') {
			++newlines;
		}
	}
	printf("%5i %5i %5i\n", blank, tabs, newlines);
		
        return 0;
}

