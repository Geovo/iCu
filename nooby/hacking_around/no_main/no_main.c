#include <stdio.h>

/*
 * today we'll do some fun stuff
 * we will actually create a program without a main function
 * the problem is, that C doesn't allow a program to NOT have a main function
 * but we'll trick it with some Preprocessor fun
 */

 #define tricky(a,b,c,d,e,f) f##e##d##c // the double hash means that it simply merges some parameters
 #define faker tricky(n,o,n,i,a,m) // in this case we'd get m,a,i,n -> main

int faker() {
	// this function will be replaced with main
	// so that there actually is a main function, but we simply don't see it
	puts("Hello world!");

	return 0;
}
