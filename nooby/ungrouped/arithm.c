#include <stdio.h>

int main()
{
	int first, second, add, substract, multiply;
	float divide;

	printf("Enter two integers\n");
	scanf("%d%d", &first, &second);

	add = first + second;
	substract = first - second;
	multiply = first * second;
	divide = first / (float)second;

	printf("Sum = %d\n", add);
	printf("Difference = %d\n", substract);
	printf("Multiplication = %d\n", multiply);
	printf("Division = %.2f\n", divide);

	return 0;
}
