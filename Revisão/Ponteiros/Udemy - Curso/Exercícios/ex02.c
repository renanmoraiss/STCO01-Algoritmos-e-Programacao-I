/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int x = 2;
    int * p = &x; //p aponta para x... *p = 2.
    printf("%d\n", ++(*p)); //primeiro incrementa 1 em *p e depois imprime.
    return 0;
}