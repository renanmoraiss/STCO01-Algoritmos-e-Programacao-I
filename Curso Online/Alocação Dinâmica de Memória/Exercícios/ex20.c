#include <stdio.h>
#include <stdlib.h>

void preencheVetor(int vet[], int tam);
void imprimeVetor(int *vet, int tam, char frase[]);
void valoresDobradosVetor(int *vet, int vet2[], int tam);

int main() {
    int *vet, *vet2, tam;
    char frase1[] = "Vetor original";
    char frase2[] = "Vetor dobrado";
    
    printf("Tamanho do vetor: ");
    scanf("%d", &tam);

    vet = malloc(tam * sizeof(int));
    vet2 = malloc(tam * sizeof(int));

    if ((vet == NULL) || (vet2 == NULL)) {
        return -1;
    }

    preencheVetor(vet, tam);
    valoresDobradosVetor(vet, vet2, tam);
    imprimeVetor(vet, tam, frase1);
    imprimeVetor(vet2, tam, frase2);

    free(vet);
    free(vet2);

    return 0;
}

void preencheVetor(int vet[], int tam) {
    for (int i = 0; i < tam; i++) {
        scanf("%d", vet + i);
    }
}

void imprimeVetor(int *vet, int tam, char frase[]) {
    printf("\n%s\n", frase);
    for (int i = 0; i < tam; i++) {
        printf("vet[%d] = %d\n", i, *(vet + i));
    }
}

void valoresDobradosVetor(int *vet, int vet2[], int tam) {
    for (int i = 0; i < tam; i++) {
        *(vet2 + i) = *(vet + i) * 2;
    }
}