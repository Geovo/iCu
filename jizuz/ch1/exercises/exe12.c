#include <stdio.h>
#define YES 1
#define NO 0

// /|\PROGRESS: FINISHED

int lengths[10];

int biggest(int ary[], int size) {
    extern int lengths[10];
    int biggo = ary[0];
    for(int i = 1; i < size; i++) {
        if (ary[i] > biggo)
            biggo = ary[i];
    }
    return biggo;
}

void histogram() {
    extern int lengths[10];
    int ender = biggest(lengths, 10);
    for (int row = ender; row >= 0; row--) {
        printf("%4d ", row);
        for (int col = 0; col < 10; col++) {
            if (lengths[col] >= row)
                printf("  ||");
        }
        printf("\n");
    }
    printf("     ");
    for (int i = 0; i < 10; i++)
        printf("%4d", i);
    printf("\n\n");
}
// here goes the main function

int main(int argc, char *argv[])
{
        // awesome code goes here:
    extern int lengths[10];
    int c, inword, wl, i;

    wl = 0;
    int length[10];
    for (i = 0; i < 10; i++)
        length[i] = 0;

    while ((c = getchar()) != EOF) {
        if ((c > 64 && c <91) || (c > 96 && c < 123)) {
        // it's a character, so we counquer a word
        if (inword == NO) {
            // if it's the first character of a word
            wl = 0;
            inword = YES;
        }
        wl++;

        } else {
        // this means, the word ended
        length[wl]++;
        wl = 0;
        inword = NO;
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d chars ==> %d\n", i, length[i]);
        lengths[i] = length[i];
    }


    printf("\n");
          histogram();

        return 0;
}
