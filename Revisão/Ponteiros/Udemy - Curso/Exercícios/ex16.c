/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int a = 1, b = 2;
    int *p = &a, *q = &b; //*p = 1 e *q = 2.
    *p += *q; //*p = 1 + 2... *p = 3.
    *q += *p; //*q = 2 + 3... *q = 5.
    printf("%d %d\n", a, b);
    return 0;
}