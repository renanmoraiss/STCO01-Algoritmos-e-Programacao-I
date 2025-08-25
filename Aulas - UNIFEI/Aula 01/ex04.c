#include <stdio.h>

#define troca(x, y) {\
    int temp;\
    temp = x;\
    x = y;\
    y = temp;\
} 

int main(void) {
    int i = 10;
    int j = 9;

    printf("i = %d\n", i);
    printf("j = %d\n", j);

    troca(i, j);

    printf("i = %d\n", i);
    printf("j  %d\n", j);

    return 0;
}