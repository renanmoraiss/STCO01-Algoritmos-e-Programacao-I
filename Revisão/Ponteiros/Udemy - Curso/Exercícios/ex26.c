/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

void soma(int *x, int y);

int main() {
    int a = 3, b = 4;
    soma(&a, b);
    printf("%d\n", a);
    return 0;
}

void soma(int *x, int y) { //*x = 3 e y = 4.
    *x += y; //*x = 3 + 4... *x = 7.
}