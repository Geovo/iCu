/* 
 * here you go, my friend! Have fun
 * and code the Cit out of the challenge!!! :D
 */

int solution(char *S) {
    char *ptr = S;
    //int open = 0, closed = 0;
    int stack = 0, no_match = 0;
    for (; *ptr != '\0'; ptr++) {
        if (*ptr == '(')
            stack++;
        if (*ptr == ')') {
            if (stack > 0) {
                stack--;
            } else {
                no_match = 1;
            }
        }
    }
    return no_match == 0 ? 1 : 0;
}
