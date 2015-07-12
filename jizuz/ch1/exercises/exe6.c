#include <stdio.h>


// /|\PROGRESS: FINISHED

// Let's verify that 'getchar() != EOF' is really a 0 or 1

int main(int argc, char *argv[])
{
        // awesome code goes here:
	int uncover;

	uncover = getchar() != EOF;
	printf("Check this out: it's a %5i\t ==> YEAH!\n", uncover);
        return 0;
}

