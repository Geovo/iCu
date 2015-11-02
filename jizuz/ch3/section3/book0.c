#include <stdio.h>


// /|\PROGRESS: FINISHED

// here we'll implement a simple binary search function
int binary(int x, int v[], int n) {
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low+high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else /* found match */
			return mid;
	}
	return -1;
}

// here goes the main function

int main(int argc, char *argv[])
{
        // awesome code goes here:
		int a[] = {1,2,3,4,5,6,7,8,9};		
		// as result we have the index where the number appears
		printf("%i  %i  [1,2,3,4,5,6,7,8,9]  index: %i\n", 4, 10, binary(4, a, 10));

        return 0;
}

