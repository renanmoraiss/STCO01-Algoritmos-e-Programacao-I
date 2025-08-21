/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int x = 7;
    int *p = &x; //p aponta para x... *p = 7.
    printf("%d\n", (*p)++); //imprime o valor de *p e depois incrementa 1.
    printf("%d\n", x); //x = 8, pois depois do primeiro printf que ele incrementa 1.
    return 0;
}