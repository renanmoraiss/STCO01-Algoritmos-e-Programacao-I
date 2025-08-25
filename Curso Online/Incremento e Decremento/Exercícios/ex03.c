#include <stdio.h>

int main() {
    int x;
    x = 5;
    printf("%d\n", ++x);
    printf("%d\n", x++);
    return 0;
}

/*
EXPLICAÇÃO DO CÓDIGO:
Linha 5: atribui a x, o valor 5.
Linha 6: incrementa 1 a x, e então imprime o novo valor. x = 6
Linha 7: imprime o valor de x (x = 6), e então incrementa 1 a x;
*/