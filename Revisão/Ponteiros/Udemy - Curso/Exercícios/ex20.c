/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int vet[4] = {2, 4, 6, 8};
    int * p = vet; //p aponta para vet, ou seja, *p = 2.
    for (int i = 0; i < 4; i++) {
        *p += i;
        p++;
    }
    for (int i = 0; i < 4; i++) {
        printf("%d\t", vet[i]);
    }
    return 0;
}

/*
  Primeiro for:
     *p = *p + i;
     1. *p = 2 + 0... *p = 2.
     2. *p = 4 + 1... *p = 5.
     3. *p = 6 + 2... *p = 8.
     4. *p = 8 + 3... *p = 11.


     p++;
     1. passa a apontar para vet[1].
     2. passa a apontar para vet[2].
     3. passa a apontar para vet[3].
     4. passa a apontar para vet[4] e acaba o for.
*/