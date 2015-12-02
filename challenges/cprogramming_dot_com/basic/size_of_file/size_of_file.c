#include <stdio.h>

void file_size(char line[], long double *where) {
	for (int i = 0; line[i] != '\0'; i++) {
//		printf("where is %i\n", *where);
		*where = *where + 1;
	}
}

int main(int argc, char *argv[]) {
	long double counter;
	counter = 0;
	FILE *f = fopen(argv[1], "r");
	char line[1024];
	while(fgets(line, 1024, f))
		file_size(line, &counter);

	char *quant;
	if (counter < 1024) {
		quant = "B";
	} else if (counter < 1024 * 1024) {
		quant = "KB";
		counter /= (1024);
	} else if (counter < 1024 * 1024 * 1024) {
		quant = "MB";
		counter /= (1024*1024);
	}
	else if (counter < (long long int)1024 * 1024 * 1024 * 1024) {
		quant = "GB";
		counter /= (1024*1024*1024);
	}

	printf("The size of file %s is: %Lf %s\n", argv[1], counter, quant);

	fclose(f);

	return 0;
}
