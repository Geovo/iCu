#include <stdio.h>
#define YES 1
#define NO 0

// /|\PROGRESS: FINISHED

// here goes the main function

int main(int argc, char *argv[])
{
        // awesome code goes here:
        int c, nw, nc, realch, inword;

	inword = NO;
	nc = realch = nw = 0;
	while ((c = getchar()) != EOF) {
	    nc++;
	    if ((c >= 48 && c <= 90) || (c >= 96 && c <= 122)) {
		// if in here, then a character, digit or apostrophe
		realch++;
		if (inword == NO)
			inword = YES;
	    } else if (inword == YES) {
		// it's not a valid character
		inword = NO;
		nw++;
	    }
	}
	printf("w: %d\tc: %d\trealch: %d\n", nw, nc, realch);

        return 0;
}

