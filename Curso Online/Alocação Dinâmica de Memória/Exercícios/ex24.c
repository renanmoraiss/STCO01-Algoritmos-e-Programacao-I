#include <stdio.h>
#include <stdlib.h>

void imprimeVetor(int *vet, int tam, char frase[]);
void preencheVetor(int *vet, int tam);
void aumentaVetor(int **vet, int tam);
void preencheVetorNovo(int *vet, int tamAntigo, int tamNovo);

int main() {
    int *vet, tamOld, tamNovo;
    
    printf("Tamanho do vetor: ");
    scanf("%d", &tamOld);

    vet = calloc(tamOld, sizeof(int));

    if (vet == NULL) {
        return -1;
    }

    imprimeVetor(vet, tamOld, "Vetor inicializado com calloc:");

    preencheVetor(vet, tamOld);

    imprimeVetor(vet, tamOld, "Vetor com os valores lidos do teclado:");

    printf("Novo tamanho do vetor: ");
    scanf("%d", &tamNovo);

    aumentaVetor(&vet, tamNovo);

    preencheVetorNovo(vet, tamOld, tamNovo);

    imprimeVetor(vet, tamNovo, "Vetor aumentado:");

    free(vet);

    return 0;
}

void imprimeVetor(int *vet, int tam, char frase[]) {
    printf("\n%s\n", frase);
    for (int i = 0; i < tam; i++) {
        printf("vet[%d] = %d\n", i, *(vet + i));
    } printf("\n");
}

void preencheVetor(int *vet, int tam) {
    for (int i = 0; i < tam; i++) {
        scanf("%d", vet + i);
    }
}

void aumentaVetor(int **vet, int tam) {
    int *temp;
    temp = realloc(*vet, sizeof(int) * tam);

    if (temp == NULL) {
        return;
    }
    
    *vet = temp;
} 

void preencheVetorNovo(int *vet, int tamAntigo, int tamNovo) {
    for (int i = tamAntigo; i < tamNovo; i++) {
        scanf("%d", vet + i);
    }
}