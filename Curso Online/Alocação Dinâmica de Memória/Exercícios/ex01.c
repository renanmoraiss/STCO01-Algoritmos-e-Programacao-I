#include <stdio.h>
#include <stdlib.h>

void preencheVetor(int *vet, int tam);
void imprimeVetor(int *vet, int tam);

int main() {
    int *vet, tam;

    printf("Tamanho do vetor: ");
    scanf("%d", &tam);

    vet = malloc(sizeof(int) * tam);

    if (vet == NULL) {
        return -1;
    }

    preencheVetor(vet, tam);
    imprimeVetor(vet, tam);

    free(vet);

    return 0;
}

void preencheVetor(int *vet, int tam) {
    for (int i = 0; i < tam; i++) {
        scanf("%d", vet + i);
    }
}

void imprimeVetor(int *vet, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("vet[%d] = %d\n", i, *(vet + i));
    }
}