/* 
 * here you go, my friend! Have fun
 * and code the Cit out of the challenge!!! :D
 */

#include <stdio.h>


int solution(int A[], int N) {
    // write your code in C99
    int tests[N], i;
    for (i = 0; i < N; i++)
        tests[i] = 0;
        
    for (i = 0; i < N; i++) {
        tests[A[i]-1] = 1;
    }
    
    for (i = 0; i < N; i++)
        if (tests[i] == 0)
            return 0;
            
    return 1;
}

// THIS IS ANOTHER VERSION

int solution2(int A[], int N) {
    // write your code in C99
    
    int i;
    long long int sum = 0;
    for (i = 1; i <= N; i++) {
        sum += i;
    }
    
    for (i = 0; i < N; i++) {
        sum -= A[i];
    }   
    
    if (sum == 0)
        return 1;
    
    return 0;
}

int main(int argc, const char * argv[]) {
    FILE *file = fopen(argv[1], "r");
    char line[1024];
    while (fgets(line, 1024, file)) {
  	  // Do something with the line
    }
    return 0;
}
