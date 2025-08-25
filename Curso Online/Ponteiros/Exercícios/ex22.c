/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int vet[3] = {1, 2, 3};
    int *p = vet; //*p = 1.
    printf("%d\n", *p++); //printa *p e depois incrementa 1. (output = 1)
    printf("%d\n", ++(*p)); //*p incrementa mais 1 em cima do pós incremento. (output = 3)
    printf("%d\n", *p); //(output = 3)
    return 0;
}