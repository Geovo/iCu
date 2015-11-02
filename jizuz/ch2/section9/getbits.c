#include <stdio.h>

unsigned getbits(unsigned x, int p, int n)
{
    /* I'll try to explain this: 
       First, we take the first num and shift it to the right end
       Then, we get a series of 1's which results in a negative number -- ~0 << n --
       And then this number is one complemented
       In the end, we AND the both numbers */
    return (x >> (p+1-n)) & ~(~0 << n);
}

char *bin(int num)
{
    char res[16];
    int i = 0;
    while (num > 0){
	printf("%d", num % 2); 
        res[i] = num % 2;
        i++;
        num /= 2;
    }
    printf("\nBin: %s\n", res);
    return res;
}

int main()
{
    int x = getbits(124, 4, 3);
    printf("Hello,X ==> %i\n", x);
    bin(7);

    return 0;
}
