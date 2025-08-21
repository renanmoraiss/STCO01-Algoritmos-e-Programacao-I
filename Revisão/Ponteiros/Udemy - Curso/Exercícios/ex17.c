/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int vet[5] = {1, 2, 3, 4, 5};
    int * p = vet; //p aponta para vet, ou seja, *p = 1.
    *(p + 3) = *(p + 1) * 2; //*(p + 3) = 2 * 2... vet[3] = 4.
    printf("%d\n", vet[3]);
    return 0;
}