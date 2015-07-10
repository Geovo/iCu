#include <stdio.h>

//#define MAX_STA 512

int count_elements(int ary[])
{
	int a = 0;
	while(ary[a])
		a++;

	return a;
}

int pop(int *ary[])
{
	int num = count_elements(ary);
	printf("Num: %i\n", num);
	int p = ary[num-2];
	ary[num-2] = NULL;
	return p;
}

int push(int ary[], int n)
{
	int elem = count_elements(ary);
	int nu[elem + 1], x;
 	for(x = 0; x < elem; x++)
		nu[x] = ary[x];

	nu[elem] = n;	

	return *nu;
}


int main(int argc, int **argv)
{
	int doing[] = {1,4,5,2,5,6,3,2,5};
	int last = pop(doing);
	printf("Last num: %i\n", last);
	/*int new = push(doing, 9);
	int b = 0;
	while(new[b]){
		printf("New: %i\n", new[b]);
		b++;
	}*/

	return 0;
}
