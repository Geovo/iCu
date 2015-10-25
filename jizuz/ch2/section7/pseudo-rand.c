#include <stdio.h>

/* Hey there, this is fucking awesome! It's the first pseudo-random generator I actually played with.
So it actually takes some 'seed' --> 'next'. Well, then it takes this number and  multiplies it by a big number
and adds 12345 to it. Later an unsigned int of 'next' is divided by 65536 and the result of that is
modulo'd with 32767 (making it always a num in the range 0..32768). Actually really clever :)
It's cool to explore some stuff like that! */

// /|\PROGRESS: FINISHED

unsigned long int next = 1;

int rand();
void srand(unsigned int seed);

// here goes the main function

int main(int argc, char *argv[])
{
        // awesome code goes here:
	printf("%lu\n", next);
	srand(14829);
	printf("%lu\n", next);
	int res = rand();
	printf("%i\n", res);
	int x;
	for (x = 0; x < 10; x++)
		printf("%i\n", rand());

        return 0;
}

int rand()
{	/* return random int on 0..32767 */
	next = next * 1103515245 + 12345;
	return (unsigned int)(next/65536) % 32768;
}

/* srand: set seed for rand() */
void srand(unsigned int seed)
{	
	next = seed;
}

