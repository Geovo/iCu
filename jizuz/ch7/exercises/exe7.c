#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

#define M_LINE 1024

// /|\PROGRESS: FINISHED


// let's print a bunch of files
// for that we'll need va_args

int page = 0;

void printfile(FILE *f, char *name) {
	char line[M_LINE];
	printf("===================================================================\n\t\tFILE: %s\n", name);

	printf("===================================================================\n");
	while (fgets(line, 1024, f)) {
		printf("%s", line);
	}
	page++;
	printf("===================================================================\n\t\tEND OF PAGE %i\n", page);
	printf("===================================================================\n");
}

void print_pages(char *f) {
	va_list args;
	FILE *p = fopen(f, "r");
	printfile(p, f);
	fclose(p);
}

void error(char *mes) {
	printf("%s\n", mes);
	exit(1);
}

// here goes the main function

int main(int argc, char *argv[])
{
        // awesome code goes here:
		if (argc == 1)
			error("Usage: ./exe7 file1 file2 ...");

		while (--argc > 0) {
			print_pages(*++argv);
		}
        return 0;
}

