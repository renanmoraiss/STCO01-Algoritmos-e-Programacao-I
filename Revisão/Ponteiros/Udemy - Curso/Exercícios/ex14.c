/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int vet[3] = {1, 2, 3};
    int* p = vet; //p aponta para vet, ou seja, *p = 1.
    printf("%d\n", *p++); //primeiro imprime o valor de *p e depois incrementa 1.
    printf("%d\n", *p); //imprime o valor incrementado, ou seja, *p + 1 = 2.
}