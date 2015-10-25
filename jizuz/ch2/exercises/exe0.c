#include <stdio.h>
#include <limits.h>

// /|\PROGRESS: FINISHED

// Let's do this in both ways: use the macros from limits.h and to compute value limits on my own

void use_macros()
{
   printf("The number of bits in a byte %d\n", CHAR_BIT);

   printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
   printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
   printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);

   printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
   printf("The maximum value of SHORT INT = %d\n", SHRT_MAX); 

   printf("The minimum value of INT = %d\n", INT_MIN);
   printf("The maximum value of INT = %d\n", INT_MAX);

   printf("The minimum value of CHAR = %d\n", CHAR_MIN);
   printf("The maximum value of CHAR = %d\n", CHAR_MAX);

   printf("The minimum value of LONG = %ld\n", LONG_MIN);
   printf("The maximum value of LONG = %ld\n", LONG_MAX);
}


void do_it_yourself()
{
	signed char sc = 1, prevsc;
	unsigned char usc = 0, prevusc;
	int i = 1, previ = 0, min=-1, prevmin=0;
	long l = 10000000, prevl;
	float fl = 16777216.0, prevfl;
	double dbl = 16777216.0, prevdbl = 16777215.0;
	
	// Here goes the signed char size:
	prevsc = 0;
	while (prevsc < sc) {
		prevsc=sc;
		sc++;
	}
	
	// Here goes int
	while (previ < i){ 
		previ=i; 
		i++;
	}

	while (prevmin > min){
                prevmin=min;
                min--;
        }


	// Let us try an unsigned long
	// This would take a long, long time :)

	while (prevl < l) {
		prevl = l;
		l+=100000;
	}

	while (prevfl < fl) {
		prevfl = fl;
		fl++;
	}


	printf("MAX FLOAT ==> %f\n", prevfl);
	printf("MIN INT ==> %i\n", prevmin);
	printf("MAX INT ==> %i\n", previ);
	printf("MAX CHAR ==> %d\n", prevsc);
	printf("MAX UNSIGNED LONG ==> %ld\n", prevl);


	while (prevdbl < dbl) {
		prevdbl = dbl;
		dbl += 1000000000000000.0;
		printf("%f\n",dbl);
	}


	printf("MAX DOUBLE ==> %f\n", prevdbl);
}


// here goes the main function

int main(int argc, char *argv[])
{
        // awesome code goes here:
	use_macros();
	do_it_yourself();

        return 0;
}

