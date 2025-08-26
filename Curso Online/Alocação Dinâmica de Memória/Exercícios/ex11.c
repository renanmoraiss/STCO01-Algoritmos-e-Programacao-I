#include <stdio.h>
#include <stdlib.h>

void preencheVetor(int vetor[], int tam);
void imprimeVetor(int *vet, int tam, char frase[]);
void aumentaVetor(int **vet, int *tam);
void adicionaValor(int *vet, int tam);

int main() {
    int *vet, tam;
    char frase1[] = "antes da edicao";
    char frase2[] = "apos a edicao";
    
    printf("Tamanho do vetor: ");
    scanf("%d", &tam);

    vet = calloc(tam, sizeof(int));
    
    if (vet == NULL) {
        return -1;
    }

    preencheVetor(vet, tam);

    imprimeVetor(vet, tam, frase1);

    aumentaVetor(&vet, &tam);

    adicionaValor(vet, tam);

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
    }
}


void aumentaVetor(int **vet, int *tam) {
    int *temp;
    
    temp = realloc(*vet, sizeof(int) * (*(tam) + 1));

    if (temp == NULL) {
        return;
    }

    *vet = temp;
    *(tam) += 1;
}

void adicionaValor(int *vet, int tam) {
    int num;

    printf("\nO tamanho do seu vetor aumentou em um (%d -> %d)\n", tam - 1, tam);
    printf("I. Final do vetor antigo = %d; I. Final do vetor novo = %d\n", tam - 2, tam - 1);
    printf("Novo valor no final: ");
    scanf("%d", &num);

    *(vet + (tam - 1)) = num;
}