/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int a = 5;
    int* p = &a; //p aponta para a... *p = 5.
    *p = *p + 3; //*p += 3 -> *p = 5 + 3... *p = 8
    printf("%d\n", a);
    return 0;
}