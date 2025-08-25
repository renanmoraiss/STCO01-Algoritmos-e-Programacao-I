/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int vet[4] = {2, 4, 6, 8};
    int *p = vet; //*p = 2
    *(p + 2) = *(p + 1) + 3; //*(p + 2) = 4 + 3 -> vet[2] = 7.
    *(p + 1) = *(p) + 1; //*(p + 1) = 2 + 1 -> vet[1] = 3. -> *(p) acessa o índice 0 do vetor.
    printf("%d %d %d %d\n", vet[0], vet[1], vet[2], vet[3]);
    return 0;
}