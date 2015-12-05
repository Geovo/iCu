#include <stdio.h>
#include <ctype.h>

// /|\PROGRESS: UNDONE

void printme(void *arg, int len) {
/*	char c = *((char *)arg);
	char *s = &c;
	int i = *((int *) arg);
	if (c == '\0' || c == ' ')
		printf("yep\n");
	if (isprint(c))
	//	while (*(s++) != '\0')
			printf("%s\n", *s);
	else if (isdigit(i))
		printf("%i\n", i);*/
//	printf(*arg);

	int i;
	for (i = 0; i < len; i++) {
		if (isprint(*(arg+i)))
			printf( *((char *)(arg+i)) );
		else
			printf("|");

	}
}

int main(int argc, char *argv[])
{
    // awesome code goes here:
	int a = 5;
	int *p = &a;
	printme(p,1);
	printme("c",1);
	printme("hello",5);

        return 0;
}

