#include <stdio.h>

int main(int argc, char *argv[]) {
	FILE *file = fopen(argv[1], "r");
	char line[1024];
	int lines = 0;
	while (fgets(line, 1024, file))
		lines++;
	printf("Number of lines in %s is: %i\n", argv[1], lines);
	fclose(file);
	return 0;
}
