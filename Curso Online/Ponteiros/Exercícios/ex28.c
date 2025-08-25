/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int a = 1, b = 2;
    int* p = &a, *q = &b; //*p = 1 e *q = 2.
    *p = *p + *q; //*p = 1 + 3... *p = 3.
    *q = *q + *p; //*q = 3 + 2... *q = 5.
    printf("%d %d\n", a, b);
    return 0;
}