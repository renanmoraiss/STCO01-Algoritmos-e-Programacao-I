/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

void altera(int *v) { //v aponta para vet, ou seja, *v = 1.
    *(v + 1) += 5; //*(v + 1) = *(v + 1) + 5 -> *(v + 1) = 2 + 5... vet[1] = 7.
}

int main() {
    int vet[3] = {1, 2, 3};
    altera(vet);
    printf("%d\n", vet[1]);
    return 0;
}