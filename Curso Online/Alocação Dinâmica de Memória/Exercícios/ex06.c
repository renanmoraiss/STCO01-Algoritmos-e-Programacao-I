#include <stdio.h>
#include <stdlib.h>

void imprimeVetor(int *v, int tam);

int main() {
    int *vet, tam;
    
    printf("Tamanho do vetor: ");
    scanf("%d", &tam);

    vet = calloc(tam, sizeof(int));

    if (vet == NULL) {
        return -1;
    }

    imprimeVetor(vet, tam);

    free(vet);

    return 0;
}

void imprimeVetor(int *v, int tam) { //mostrando que todos começam com zero
    for (int i = 0; i < tam; i++) {
        printf("vet[%d] = %d\n", i, *(v + i));
    }
}