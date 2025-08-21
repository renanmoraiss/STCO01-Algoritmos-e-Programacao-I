/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int a = 10;
    int * p = &a; //*p = 10.
    printf("%p %p %d\n", p, &a, *p); //imprime dois enderecos iguais e o valor de *p (10).
    return 0;
}