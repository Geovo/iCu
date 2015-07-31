#include <stdio.h>

#define HARD 1

int main() {
    int a = 0;
    if (a == HARD)
	printf("It's not hard!");
	HARD++;
    else
	printf("It's hard!");

    printf("\n")
}
