/* 
 * here you go, my friend! Have fun
 * and code the Cit out of the challenge!!! :D
 */
	

int solution(int A[], int N) {
    // write your code in C99
    int check[N+1];
    for (int i = 0; i <= N; i++) {
        check[i] = 0;
    }
    
    for (int i = 0; i < N+1; i++) {
        check[A[i]]++;
    }
    
    for (int i = 0; i < N+1; i++) {
        if (check[i] == 0)
            return i;
    }
    return N + 1;
}
