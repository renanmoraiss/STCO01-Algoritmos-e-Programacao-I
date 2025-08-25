#include <stdio.h>

void troca(int *i, int *j);

int main() {
    int i = 8;
    int j = 9;
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    troca(&i, &j);
    printf("i = %d\n", i);
    printf("j  = %d\n", j);
    return 0;
}

void troca(int *i, int *j) {
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}