#include <stdio.h>


// /|\PROGRESS: FINISHED

/* bitcounter: count 1 bits in x */
int bitcounter(unsigned x)
{
    int b;
    
    for (b = 0; x != 0; x >>= 1)
 	if (x & 01)
		b++;
    return b;    
}

int main(int argc, char *argv[])
{
        // awesome code goes here:
	int a = bitcounter(7);
	printf("Result: %i\n", a);

        return 0;
}

