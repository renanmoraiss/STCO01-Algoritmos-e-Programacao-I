/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int vet[4] = {2, 4, 6, 8};
    int * p = vet; //p aponta para vet, ou seja, *p = 2.
    *(p + 2) = *(p + 1) + 1; //*(p + 2) = 4 + 1... vet[2] = 5.
    printf("%d %d %d %d\n", vet[0], vet[1], vet[2], vet[3]); //2 4 5 8
    return 0;
}