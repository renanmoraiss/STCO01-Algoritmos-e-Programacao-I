/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int a = 2, b = 3;
    int* p = &a; //*p = 2.
    *p += b; //*p = 2 + 3... *p = 5.
    b = *p + b; //b = 5 + 3... b = 8.
    printf("%d %d\n", a, b);
    return 0;
}