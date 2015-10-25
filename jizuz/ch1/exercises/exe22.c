#include <stdio.h>

// /|\PROGRESS: UNDONE

// here goes the main function
// This program should remove all comments from a file
// I won't store the output nor change the input file. I will only print the modified code. If needed to store output, just use redirection!

void print_modified()
{
	int c, i, comment = 0;
	while ((c = getchar()) != EOF) {
		if (c == '/') {
			comment = 1;	
		} else if (c == '\n' && comment == 1) {
			comment = 0;
		} else if (comment == 1) {
			;
		} else 
			printf("%c", c);
	}	
}

int main(int argc, char *argv[])
{
        // awesome code goes here:
	print_modified();

        return 0;
}

