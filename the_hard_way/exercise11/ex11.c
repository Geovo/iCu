#include <stdio.h>

int main(int argc, char *argv[])
{
	// go through each string in argv
	int a = 0;
	int i = argc;
	printf("argc: %d\n", i);
	while(i > 0) {
		printf("arg %d: %s\n", a, argv[a]);
		i--;
		a++;
	}
	
	// let's make our own array of strings
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};
	
	int num_states = 4;
	i = 0; // watch for this
	while(i < num_states) {
		printf("state %d: %s\n", i, states[i]);
		states[i] = argv[i];
		printf("state %d: %s\n", i, states[i]);
		i++;
	}
	
	return 0;
}