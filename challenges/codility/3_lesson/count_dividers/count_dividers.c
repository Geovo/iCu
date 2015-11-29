/* 
 * here you go, my friend! Have fun
 * and code the Cit out of the challenge!!! :D
 */

 int solution(int A, int B, int K) {
  // terminate if A == B
  if (A == B)
  	return 0;

  int i, count = 0;
    
    for (i = A; i % K != 0 && i <= B; i++)
        ;
    
    for (; i <= B; i+=K)
        count++;
        
    return count;
}

int solution2(int A, int B, int K) {
    
    long long i, count = 0;
    
    i = A < K ? A + (K - A) : A + (A % K);

    for (; i <= B; i+=K) {
        count++;
    }
          
    return count;
}

int solution3(int A, int B, int K) {
    // write your code in C99
    if (B <= A)
        return B / K;
//    int c = B - A;
    B = ((B - A) / K) + 1;
    return c % 2 == 0 ? B + 1 : B;
}

#include <stdio.h>
int main(int argc, const char * argv[]) {
    int sol = solution2(0, 2000000000, 123);
	printf("%i\n", sol);

solution2(0, 2000000000,1789849682);
solution2(0, 2000000000,595086975);
solution2(0, 2000000000,1791261443);
solution2(0, 2000000000,1023194318);
solution2(0, 2000000000,693594264);
solution2(0, 2000000000,789438891);
solution2(0, 2000000000,182964019);
solution2(0, 2000000000,130251324);
solution2(0, 2000000000,1157089209);
solution2(0, 2000000000,1334180744);
solution2(0, 2000000000,772316995);
solution2(0, 2000000000,73163108);
solution2(0, 2000000000,1479227806);
solution2(0, 2000000000,1247658750);
solution2(0, 2000000000,1115223585);
solution2(0, 2000000000,98092288);
solution2(0, 2000000000,1916894948);
solution2(0, 2000000000,643196365);
solution2(0, 2000000000,1820871872);
solution2(0, 2000000000,983711566);	
	return 0;
}
