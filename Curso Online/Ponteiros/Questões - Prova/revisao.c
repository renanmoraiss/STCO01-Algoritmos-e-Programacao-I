#include <stdio.h>

int main() {
    int vet[3] = {10, 20, 30};
    int *x = vet; //aponta para vet[0]... = 10.
    printf("%d\n", *x);
    (*x)++; //incrementa 1 no valor do endereço apontado... 10 + 1 = 11;
    printf("%d\n", *x);
    x++; //passa a apontar para vet[1]... = 20;
    printf("%d\n", *x);
    (*x)++;
    printf("%d\n", *x);
    return 0;
}

/*
  SEMPRE que for imprimir o VALOR de um ponteiro, imprimir com *, caso contrário
  (imprimir o endereço do ponteiro), imprimir sem *.
*/

/*
  int *a, b; -> somente a é ponteiro.
  int* a, b; -> somente a é ponteiro.
  int * a, b; -> somente a é ponteiro.
  Mesmo com várias variáveis na mesma linha, somente a primeira variável é ponteiro. Portanto, os 3 exemplos são a mesma coisa.
*/