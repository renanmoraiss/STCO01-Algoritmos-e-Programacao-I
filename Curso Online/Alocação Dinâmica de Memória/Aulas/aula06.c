#include <stdio.h>
#include <stdlib.h>

    /*
    Como passar um vetor dinamico como parametro...
    */

    void imprimeVetor(int *vet, int tam);
    int somaVetor(int *vet, int tam);

int main() {
    int *vet, tam;
    int soma;

    printf("Tamanho do vetor: ");
    scanf("%d", &tam);

    vet = malloc(sizeof(int) * tam);

    if (vet == NULL) {
        return -1;
    }

    for (int i = 0; i < tam; i++) {
        scanf("%d", vet + i);
    }

    imprimeVetor(vet, tam);
    soma = somaVetor(vet, tam);

    printf("Soma = %d\n", soma);

    free(vet);

    return 0;
}

void imprimeVetor(int *vet, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("vet[%d] = %d\n", i, *(vet + i));
    }
}

int somaVetor(int *vet, int tam) {
    int soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += *(vet + i);
    }
    return soma;
}