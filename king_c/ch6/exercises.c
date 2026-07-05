#include <stdio.h>

//1 2 4 8 16 32 64 128
void ex1() {
    int i = 1;
    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    }
}

// 9384 938 93 9 
void ex2() {
    int i = 9384;
    do {
        printf("%d ", i);
        i /= 10;
    } while (i > 0);
}

// 5 4 3 2 
void ex3() {
    int i, j;
    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
        printf("%d ", i);
    //     printf("i = %d j = %d\n", i, j);
    // printf("i = %d j = %d\n", i, j);
}

int main() {
    ex3();
    return 0;
}

