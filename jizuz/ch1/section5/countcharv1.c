#include <stdio.h>


// /|\PROGRESS: FINISHED

// here goes the main function

int main(int argc, char *argv[])
{
        // awesome code goes here:
	long nc;

	nc = 0;
	while (getchar() != EOF){
		nc++;
		printf("%ld\n", nc);
	}
        return 0;
}

