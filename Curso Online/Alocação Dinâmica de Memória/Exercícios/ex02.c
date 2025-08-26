#include <stdio.h>
#include <stdlib.h>

void preencheVetor(float *vet, int tam);
float mediaVetor(float *vet, int tam);

int main() {
    float *vet;
    float media;
    int tam;
    
    printf("Tamanho do vetor: ");
    scanf("%d", &tam);

    vet = malloc(sizeof(float) * (float)tam);

    if (vet == NULL) {
        return -1;
    }

    preencheVetor(vet, tam);
    media = mediaVetor(vet, tam);

    printf("Media = %0.2f\n", media);

    free(vet);

    return 0;
}

void preencheVetor(float *vet, int tam) {
    for (int i = 0; i < tam; i++) {
        scanf("%f", vet + i);
    }
}

float mediaVetor(float *vet, int tam) {
    float soma = 0, media;
    for (int i = 0; i < tam; i++) {
        soma+= *(vet + i);
    }
    media = (soma / (float)tam);
    return media;
}