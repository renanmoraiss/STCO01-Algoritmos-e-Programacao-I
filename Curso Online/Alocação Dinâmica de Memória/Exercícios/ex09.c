#include <stdio.h>
#include <stdlib.h>

void preencheVetor(int *vet, int tam);
void imprimeVetor(int *vet, int tam, char frase[]);

int main() {
    int *vet, *temp, tam;
    char frase1[] = "antes do realloc";
    char frase2[] = "depois do realloc";

    printf("Tamanho do vetor: ");
    scanf("%d", &tam);

    vet = malloc(sizeof(int) * tam);

    if (vet == NULL) {
        return -1;
    }

    preencheVetor(vet, tam);
    imprimeVetor(vet, tam, frase1);

    printf("Novo tamanho do vetor: ");
    scanf("%d", &tam);

    temp = realloc(vet, sizeof(int) * tam);

    if (temp == NULL) {
        return -1;
    }

    vet = temp;

    preencheVetor(vet, tam);
    imprimeVetor(vet, tam, frase2);

    free(vet);

    return 0;
}

void preencheVetor(int *vet, int tam) {
    for (int i = 0; i < tam; i++) {
        scanf("%d", vet + i);
    }
}


void imprimeVetor(int *vet, int tam, char frase[]) {
    printf("\nVetor %s:\n", frase);
    for (int i = 0; i < tam; i++) {
        printf("vet[%d] = %d\n", i, *(vet + i));
    } printf("\n");
}