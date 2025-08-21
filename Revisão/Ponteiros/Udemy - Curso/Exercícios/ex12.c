/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int vet[3] = {3, 6, 9};
    int * p = vet; //p aponta para vet, ou seja, *p = 3.
    printf("%d\n", *p); 
    p++; //agora p aponta para vet[1]... *p = 6
    printf("%d\n", *p);
    return 0;
}