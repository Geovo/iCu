#include <stdio.h>


// /|\PROGRESS: UNDONE

int main(int argc, char *argv[])
{
	// a few notes here
	int x = 15;
	int *px = &x;
	int y = *px;

	printf("x: %i\npx: %i\ny: %i\n", x, *px, y);

    return 0;
}

