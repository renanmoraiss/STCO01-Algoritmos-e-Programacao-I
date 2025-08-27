#include <stdio.h>
#include <stdlib.h> 

void imprimeVetor(int *V, int tam, char frase[]);
void preencheVetor(int *vet, int tam);

int main() {
    int *vet, tam;
    printf("Tamanho do vetor: ");
    scanf("%d", &tam);
    char frase1[] = "alocado com malloc";
    char frase2[] = "inicializdo com valores do teclado";

    vet = malloc(sizeof(int) * tam);

    if (vet == NULL) {
        return -1;
    }

    imprimeVetor(vet, tam, frase1);
    preencheVetor(vet, tam);
    imprimeVetor(vet, tam, frase2);

    free(vet);

    return 0;
}

void imprimeVetor(int *V, int tam, char frase[]) {
    printf("\nVetor %s:\n", frase);
    for (int i = 0; i < tam; i++) {
        printf("vet[%d] = %d\n", i, *(V + i));
    } printf("\n");
}

void preencheVetor(int *vet, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Valor [%d]: ", i+1);
        scanf("%d", vet + i);
    }
}