/* 
 * here you go, my friend! Have fun
 * and code the Cit out of the challenge!!! :D
 */
// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int X, int A[], int N) {
    // write your code in C99
    //int all_ones = 0;
    if (X > N)
        return -1;
    
    int checker[X+1];
    int arend = X;
    int ptr = 1;
    
    checker[0] = 0;
    
    for (int i = 1; i <= X; i++) {
        checker[i] = 0;
    }
    
    for (int i = 0; i < N; i++) {
        if (A[i] <= X)
            checker[A[i]]++;
        
        while(checker[ptr] >= 1)
            ptr++;
        
        if (ptr > arend)
            return i;
    }
    
    return 0;
}
