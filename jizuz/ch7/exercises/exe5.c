#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1024

// /|\PROGRESS: FINISHED

/* This should compare two files which I'll get as input through argv[] */

void die(char msg[]) {
	printf("%s\n", msg);
	exit(1);
}

void compfile(FILE *f1, FILE *f2) {
	char line1[MAX_LINE], line2[MAX_LINE];
	char *ptr;
	int line = 0;
	while (fgets(line1, MAX_LINE - 1, f1) != NULL) {
		if (fgets(line2, MAX_LINE - 1, f2) == NULL)
			die("check the second file please");
		if (strcmp(line1, line2) == 0)
			continue;
		else {
			printf("Not the same on line %i: %s", line, line1);
			return;
		}	
		line++;
	}
	printf("The files are the same\n");
}

// here goes the main function

int main(int argc, char *argv[])
{
        // awesome code goes here:
	FILE *f1 = fopen("exe5.c", "r");
	FILE *f2 = fopen("exe4.c", "r");

	compfile(f1, f2);

        return 0;
}

