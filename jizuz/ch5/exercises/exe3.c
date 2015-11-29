#include <stdio.h>


// /|\PROGRESS: UNDONE

#define xstr(x) str(x)
#define str(x) #x
#define a hello
#define con(x, y) {xstr(x) xstr(y)};
//#define my_strcat(S, T) S = S # T

// here goes the main function

int main(int argc, char *argv[])
{
        // awesome code goes here:
        char *s;

        char *t = "hello";
//        my_strcat(s, t);

        //int x = my_strcat(5,4);
        printf("%s\n",con(s, t));

        return 0;
}
