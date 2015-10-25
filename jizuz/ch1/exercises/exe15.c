#include <stdio.h>


// /|\PROGRESS: FINISHED

void temp()
{
	float fahr, celsius;

	for (fahr = 0; fahr <= 300; fahr+=20){
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", celsius, fahr);
	}
}


int main(int argc, char *argv[])
{
        // awesome code goes here:
	temp();

        return 0;
}

