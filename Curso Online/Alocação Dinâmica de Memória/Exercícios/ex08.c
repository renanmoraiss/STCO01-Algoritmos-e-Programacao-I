#include <stdio.h>
#include <stdlib.h>

void imprimeVetor1(int *vet, int tam);
void imprimeVetor2(int vet2[], int tam);

int main() {
    int *vet, *vet2, tam;

    printf("Tamanho dos vetores: ");
    scanf("%d", &tam);

    vet = malloc(sizeof(int) * tam);

    if (vet == NULL) {
        return -1;
    }

    vet2 = calloc(tam, sizeof(int));

    if (vet2 == NULL) {
        return -1;
    }

    imprimeVetor1(vet, tam);
    imprimeVetor2(vet2, tam);

    free(vet);
    free(vet2);

    return 0;
}

void imprimeVetor1(int *vet, int tam) {
    printf("\nVetor alocado com malloc:\n");
    for (int i = 0; i < tam; i++) {
        printf("vet[%d] = %d\n", i, *(vet + i));
    } printf("\n");
}

void imprimeVetor2(int vet2[], int tam) {
    printf("Vetor alocado com calloc:\n");
    for (int i = 0; i < tam; i++) {
        printf("vet2[%d] = %d\n", i, *(vet2 + i));
    }
}