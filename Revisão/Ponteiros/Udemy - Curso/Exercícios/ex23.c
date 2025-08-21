/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

void modifica(int *v);

int main() {
    int vet[3] = {1, 2, 3};
    modifica(vet);
    printf("%d %d %d\n", vet[0], vet[1], vet[2]); //2 4 3
    return 0;
}

void modifica(int *v) { //v aponta para vet, ou seja, *v = 1.
    *v += 1; //*v = *v + 1 -> *v = 1 + 1... *v = 2.
    *(v + 1) += 2; //*(v + 1) = *(v + 1) + 2 -> *(v + 1) = 2 + 2... vet[1] = 4.
}