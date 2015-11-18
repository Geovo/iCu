#include <stdio.h>


// /|\PROGRESS: FINISHED

/*
 * So what is a pointer? A pointer actually 'points' to some place in memory!
 * Sounds simple? It is simple!
 * so we declare a variable 'x' and assign 15 to it
 * Next, we assign *p (which means a pointer variable) to the adress (&x) of 'x'
 * Next, we can assign the value of *p to another variable (y in our case)
 * *p actually takes us the value of the address it points to (15 in our case)
 * In the printf we can use the %p operator to print the address of x which is stored in p
 * REMEMBER:
 * if 'p' is a pointer to 'x':
 *   When you call printf("%i", p); - the function expects an 'int' value, but it gets an '*int' value
 *   When you call printf("%i", &p); - the function expects an 'int' value but gets and '** int' value
 *   To get the proper value you have to again 'point out' that you want to print the value that's stored in &x
 *   this means: printf("%i", *p); - here you call the value of the memory address where p points to
 *
 */

/*
 * Now let's move on to pointer arithmetics:
 * if you have an array a[10] and you assign a pointer to it: 
 * int *pa = &a[0]; - so you actually assign it to the first element of the array
 * Since 'a' means "the first element of the array (index 0)", we can rewrite the statement as following:
 * int *pa = a; - this looks a lot better :)
 * -------------------------------------------
 * Let's get back to pointer arithmetics:
 * if you write 'int y = *pa + 1' you will get the value of a[0] + 1 assigned to y
 * if you write 'int y = *(pa + i)' you will get the value of a[0+i] assigned to y
 * this way you can loop through strings and arrays or even simply memory blocks
 * the system automatically gets you to the next element of the array, regardless of the data type
 * so if a[] is an array of ints, you will move 32 bits higher or lower when doing pointer addition/subtraction
 * if it's an array of longs, you will move by 64 bits every step
 * that's pretty much it for now
 *
 */

// a simple example of strlen can be written with using pointers and pointer arithmetics
int strlen(char *s) {
	int n;

	// WTF? Incrementing a pointer variable? 
	// Do you remember? you simply move 1 char up by adding 1 to the pointer
	// Keep it simple, bro!
	for (n = 0; *s != '\0'; s++)
		n++;

	return n;
}

int main(int argc, char *argv[])
{
	// here go some ints
	int x = 15;
	int *p = &x; // this gets the address of the x variable
	int y = *p;
	printf("x: %i\tp: %i\n", x, *p); 

        return 0;
}

