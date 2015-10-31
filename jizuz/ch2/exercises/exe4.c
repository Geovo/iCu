#include <stdio.h>


// /|\PROGRESS: FINISHED

int any(char a[], char b[]) {
	int i, j;
	for (i = 0; a[i] != '\0'; i++) {
		for (j = 0; b[j] != '\0'; j++)
			if (a[i] == b[j])
				return j;
	}
	return -1;		
}

// here goes the main function

int main(int argc, char *argv[])
{
        // awesome code goes here:
		char a[] = "hello";
		char b[] = "tkd";
		char c[] = "leo";
		printf("a and b -> %d\n", any(a, b));
		printf("a and c -> %d\n", any(a, c));

        return 0;
}

