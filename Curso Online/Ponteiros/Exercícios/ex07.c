/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

void incrementa(int *x);

int main() {
    int a = 4;
    incrementa(&a);
    printf("%d\n", a);
    return 0;
}

void incrementa(int *x) { //x recebe o endereco de a... *x = 4.
    (*x)++; //executa essa expressão e depois incrementa 1 em *x... *x + 1 = 5.
}