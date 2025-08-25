#include <stdio.h>

void troca (int *i, int *j);

int main(void) {
    int i = 10;
    int j = 9;

    printf("i = %d\n", i);
    printf("j = %d\n", j);

    troca(&i, &j);

    printf("i = %d\n", i);
    printf("j = %d\n", j);

    return 0;
}

/* void troca (int *i, int *j) { ANTES 
    int *temp;
    *temp = *i;
    *i = *j;
    *j = temp;
} */

/*
O erro na função troca é declarar temp como um ponteiro para inteiro 
e tentar armazenar nele um valor de um outro ponteiro para inteiro.
Sabe-se que um ponteiro é uma variável especial que deve apontar / armazenar um endereço de memória de outra variável.
*/

void troca (int *i, int *j) { // DEPOIS
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}