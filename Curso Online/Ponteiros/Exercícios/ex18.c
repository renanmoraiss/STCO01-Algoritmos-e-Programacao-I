/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int a = 3, b = 5;
    int* p = &a; //*p = 3.
    printf("%d\n", (*p)++ + b); //printa e depois incrementa 1 em *p, ou seja, *p + b... 3 + 5... *p = 8.
    printf("%d\n", a);
    return 0;
}

/*
Primeiro exercício que errei, confundi o output do a!
Achei que não alterava nada no a, mas depois de printar, o *p recebe 1 de incremento, que ao apontar para o endereço de a, a passa a valer 4.
*/