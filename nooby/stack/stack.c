#include "stack.h"

#define MAXSTACK 100
#define EMPTYSTACK -1
int top = EMPTYSTACK;
char items[MAXSTACK];

void push(char c) {
	items[top++] = c;
}

char pop() {
	return items[top--];
}

void clean() {
	items[0] = '\0';
}

int full() {
	return top+1 == MAXSTACK;
}

int empty() {
	return top == EMPTYSTACK;
}
