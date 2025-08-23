/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int vet[3] = {1, 2, 3};
    int* p = vet + 2; //p aponta para vet[2], ou seja, *p = 3.
    *p = *(p - 2) + 10; //*p = 11.
    printf("%d %d %d\n", vet[0], vet[1], vet[2]); // 1 2 11
    return 0;
}