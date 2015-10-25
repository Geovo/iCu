// C program to find out factorial of big or very large numbers

#include <stdio.h>
#define MAX 10000
void factorialof(int);
void multiply(int);
int length = 0;
int fact[MAX];

int main() {
    int num;
    int i;

    printf("Enter any integer number : ");
    //scanf("%d", &num);

    //printf("Got the number : %d", num);
    num = 10;


    fact[0] = 1;

    factorialof(num);

    printf("Factorial is : ");
    for(i = length; i >= 0; i--) {
        printf("%d", fact[i]);
    }
    return 0;
}

void factorialof(int num) {
    int i;
    for(i = 2; i <= num; i++) {
        multiply(i);
    }
}

void multiply(int num) {
    long i, r = 0;
    int arr[MAX];
    for(i = 0; i <= length; i++) {
        arr[i] = fact[i];
    }

    for(i = 0; i <= length; i++) {
        fact[i] = (arr[i] * num + r) % 10;
        r = (arr[i] * num + r)/10;
        printf("%ld ", r);
    }
    if (r != 0) {
        while(r != 0) {
            fact[i] = r % 10;
            r /= 10;
            r++;
        }
    }
    length = i - 1;
}
