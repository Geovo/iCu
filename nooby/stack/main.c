#include <stdio.h>
#include "stack.h"

int main() {
	char ch;
	while ((ch = getchar()) != '\n'){
		if (!full()) push(ch);
	}
	while (!empty())
		printf("%c", pop());

	printf("\n");

	return 0;
}
