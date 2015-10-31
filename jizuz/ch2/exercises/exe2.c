#include <stdio.h>


// /|\PROGRESS: FINISHED

int get_it_right(char c) {
	if (c >= 48 && c <= 57)
        return c - 48;
    else if (c >= 65 && c <= 70)
        return c - 55;
    else if (c >= 97 && c <= 102)
        return c - 87;

	return 0;
}

int htoi(char s[]) {
	int res = get_it_right(s[0]);
	
	for (int i = 1; s[i] != '\0'; i++) {
		int x = get_it_right(s[i]);
//		printf("this is x %i\n", x);
		res = res * 16 + x;
	}

	return res;
}

// here goes the main function

int main(int argc, char *argv[])
{
    // awesome code goes here:
	printf("%i\n", htoi("123a"));
	printf("%i\n", 0X123A);

    return 0;
}

