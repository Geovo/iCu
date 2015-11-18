#include <stdio.h>


// /|\PROGRESS: FINISHED

/*
 * Here we'll write a neat little program to allocate space for chars
 * Let's rock!
 */

#define NULL 0 // pointer value for error report
#define ALLOCSIZE 1000 // size of available space

static char allocbuf[ALLOCSIZE];  // storage for alloc
static char *allocp = allocbuf;  // next free position

char *alloc(int n) {
	if (allocp + n <= allocbuf + ALLOCSIZE) {
		/*
		 * This might look confusing, but it's simple:
		 * allocp + n is the 'new' position of allocp
		 * and 'allocbuf + ALLOCSIZE' equals the last position of allocbuf
		 * it's the same as '&allocbuf[0] + ALLOCSIZE'
		 * so we simply check if the array still exists at position 'allocp + n'
		 */
		 allocp += n;
		 return allocp - n; // old p
	} else
		return NULL;
}

void free(char *p) { // free storage pointed to by p
	if (p >= allocbuf && p < allocbuf + ALLOCSIZE) // here we do a similar check as in alloc above
		allocp = p;
}

int main(int argc, char *argv[])
{
        // awesome code goes here:


        return 0;
}

