#include <stdio.h>
#include <stdlib.h>

void imprimeVetor(int *vet, int tam, char frase[]);

int main() {
    int *vet, *vet2, tam;
    char frase1[] = "malloc";
    char frase2[] = "calloc";

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

    imprimeVetor(vet, tam, frase1);
    imprimeVetor(vet2, tam, frase2);

    free(vet);
    free(vet2);

    return 0;
}

void imprimeVetor(int *vet, int tam, char frase[]) {
    printf("\nVetor alocado com %s:\n", frase);
    for (int i = 0; i < tam; i++) {
        printf("vet[%d] = %d\n", i, *(vet + i));
    }
}