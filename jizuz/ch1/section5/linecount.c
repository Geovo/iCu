#include <stdio.h>


// /|\PROGRESS: FINISHED

// Now we count the lines (terminated by '\n')

int main(int argc, char *argv[])
{
        // awesome code goes here:
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);

        return 0;
}

