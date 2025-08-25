/*
ENUNCIADO
1. Suponha que os elementos de um vetor v são do tipo int e cada int ocupa 4 bytes no seu computador.
Se o endereço de v[0] é 55000, qual o valor da expressão v + 3?
*/

/*
RESPOSTA
Se o endereço de v[0] é 55000, logo o valor da expressão v + 3, tendo em vista que é um vetor de int,
equivale a:
v[0] = 55000
v[1] = 55004
v[2] = 55008
-> v[3] = 55012 <-
...
*/

#include <stdio.h>

int main() {
    int vet[3]; //OS DOIS FOR SAO EXATAMENTE IGUAIS!
    for (int i = 0; i < 4; i++) {
        printf("\nEndereco de v[%d] em Hexadecimal = %p\n", i, (void*)vet+i);
        printf("Endereco numerico de v[%d] == %ld\n", i, (long int)vet+i);
    }
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printf("\nEndereco de v[%d] em Hexadecimal = %p\n", i, &vet[i]);
        printf("Endereco numerico de v[%d] = %ld\n", i, (long int)&vet[i]);
    }
    return 0;
}