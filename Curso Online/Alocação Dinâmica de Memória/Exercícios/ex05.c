#include <stdio.h>
#include <stdlib.h>

void preencheVetor(char *vet, int tam);
void imprimeVetor(char vetor[], int tam);

int main() {
    char *vet;
    int tam;
    
    printf("Tamanho da string: ");
    scanf("%d", &tam);

    vet = calloc(tam, sizeof(char));

    if (vet == NULL) {
        return -1;
    }

    preencheVetor(vet, tam);
    //ou -> printf("%s\n", vet);
    imprimeVetor(vet, tam);

    free(vet);

    return 0;
}

void preencheVetor(char *vet, int tam) {
    for (int i = 0; i < tam; i++) {
        scanf(" %c", vet + i);
    }
}

void imprimeVetor(char vetor[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%c", *(vetor + i));
    } printf("\n");
}