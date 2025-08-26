#include <stdio.h>
#include <stdlib.h>

void preencheVetor(int *V, int tam);
void alteraVetor(int vetor[], int tam);
void imprimeVetor(int *vet, int tam);

int main() {
    int *vet, tam;

    printf("Tamanho do vetor: ");
    scanf("%d", &tam);

    vet = calloc(tam, sizeof(int));

    if (vet == NULL) {
        return -1;
    }

    preencheVetor(vet, tam);
    alteraVetor(vet, tam);
    imprimeVetor(vet, tam);

    free(vet);

    return 0;
}

void preencheVetor(int *V, int tam) {
    for (int i = 0; i < tam; i++) {
        scanf("%d", V + i);
    }
}

void alteraVetor(int vetor[], int tam) {
    for (int i = 0; i < tam; i++) {
        *(vetor + i) *= 2;
    }
}

void imprimeVetor(int *vet, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("vet[%d] = %d\n", i, *(vet + i));
    }
}