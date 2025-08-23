/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

void incrementaTudo(int *v, int n);

int main() {
    int vet[4] = {1, 2, 3, 4};
    incrementaTudo(vet, 4);
    for (int i = 0; i < 4; i++) {
        printf("%d\n", vet[i]); //1 2 4 6
    }
    return 0;
}

void incrementaTudo(int *v, int n) { //v aponta para vet, ou seja, *v = 1.
    for (int i = 0; i < n; i++) {
        *(v + 1) += i; 
    }
}

/*
  incrementaTudo:
    for:
      1. *(v + 1) = 2 + 0... vet[1] = 2.
      2. *(v + 1) = 2 + 1... vet[1] = 3.
      3. *(v + 1) = 3 + 2... vet[1] = 5.
      4. *(v + 1) = 5 + 3... vet[1] = 8.
*/