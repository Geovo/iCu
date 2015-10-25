#include <stdio.h>
#include <stdlib.h>

// This is DETAB - it replaces a tab sign with four spaces
/* Works smoothly :) */
// /|\PROGRESS: FINISHED  

char newer[10000];

// here goes the main function

void copy_str(int div)
{
	int c, i = 0, x;
	extern char newer[10000];
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			for(x = i; x < i+div; x++) {
			    newer[x] = ' '; 
			}
			i += (div-1);
		} else {
			newer[i] = c;
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
        // awesome code goes here:
	int div = 4;
	if (argc == 2)
		div = atoi(argv[1]);
	extern char newer[10000];
		copy_str(div);
		printf("%s\n", newer);

        return 0;
}

