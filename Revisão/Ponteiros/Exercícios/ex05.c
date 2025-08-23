/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int vet[3] = {5, 10, 15};
    int * p = vet; //p aponta para vet, ou seja, aponta para vet[0]... = 5.
    p++; //agora aponta para vet[1]... = 10.
    *p = 50; //altera o valor de vet[1], antes era 10 e agora é 50.
    printf("%d\n", vet[1]);
    return 0;
}