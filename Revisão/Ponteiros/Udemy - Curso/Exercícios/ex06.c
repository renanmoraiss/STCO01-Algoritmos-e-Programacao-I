/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int a = 1, b = 2;
    int* p = &a; //p aponta para a... *p = 1.
    int *q = &b; //q aponta para b... *q = 2.
    *p = *p + *q; //*p += *2 -> *p = 1 + 2... *p = 3.
    printf("%d %d\n", a, b); //a = 3, b = 2
    return 0;
}