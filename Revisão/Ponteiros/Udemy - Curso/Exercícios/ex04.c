/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int vet[3] = {10, 20, 30};
    int* p = vet; //p aponta para vet, ou seja, aponta para o vet[0].
    printf("%d\n", *p); //imprime o valor de vet[0], ou seja, 10.
    return 0;
}