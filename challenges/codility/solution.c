/* 
 * here you go, my friend! Have fun
 * and code the Cit out of the challenge!!! :D
 */

#include <stdio.h>
int main(int argc, const char * argv[]) {
    FILE *file = fopen(argv[1], "r");
    char line[1024];
    while (fgets(line, 1024, file)) {
  	  // Do something with the line
    }
    return 0;
}
