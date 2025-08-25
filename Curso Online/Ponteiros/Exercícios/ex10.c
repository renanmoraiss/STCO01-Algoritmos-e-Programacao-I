/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int vet[3] = {1, 2, 3};
    int *p = vet; //p aponta para vet, ou seja, vet[0]... *p = 1.
    *(p + 2) = *(p) + *(p + 1); //*(p + 2) = 1 + 2... vet[2] = 3.
    printf("%d\n", vet[2]);
    return 0;
}