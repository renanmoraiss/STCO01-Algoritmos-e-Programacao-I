/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int vet[4] = {1, 2, 3, 4};
    int * p = vet; //p aponta para vet, ou seja, vet[0]... *p = 1.
    for (int i = 0; i < 4; i++) {
        printf("%d\t", *(p+i));
    }
    printf("\n");
    return 0;
}

/*
OUTPUT:
-> 1
-> 2
-> 3
-> 4
*/