#include <stdio.h>
#include <stdlib.h>

void preencheVetor(int vetor[], int tam);
void encontraMaiorMenor(int *vet, int tam);

int main() {
    int *vet, tam;

    printf("Tamanho do vetor: ");
    scanf("%d", &tam);

    vet = calloc(tam, sizeof(int));

    if (vet == NULL) {
        return -1;
    }

    preencheVetor(vet, tam);
    encontraMaiorMenor(vet, tam);

    free(vet);

    return 0;
}

void preencheVetor(int vetor[], int tam) {
    for (int i = 0; i < tam; i++) {
        scanf("%d", vetor + i);
    }
}

void encontraMaiorMenor(int *vet, int tam) {
    int maiorElemento = *(vet);
    int menorElemento = *(vet);

    for (int i = 0; i < tam; i++) {
        if (*(vet + i) > maiorElemento) {
            maiorElemento = *(vet + i);
        } else if (*(vet + i) < menorElemento) {
            menorElemento = *(vet + i);
        }
    }
    printf("Maior elemento = %d\n", maiorElemento);
    printf("Menor elemento = %d\n", menorElemento);
}