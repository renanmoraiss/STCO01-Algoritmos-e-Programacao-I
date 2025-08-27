#include <stdio.h>
#include <stdlib.h>

void preencheMatriz(int **mat, int ordem);
void imprimeMatriz(int ** mat, int ordem);
void somaDiagonais(int **mat, int ordem);
void mediaMatriz(int **mat, int ordem);

int main() {
    int **mat, ordem;
    
    printf("Ordem da matriz: ");
    scanf("%d", &ordem);

    mat = calloc(ordem, sizeof(int*));

    if (mat == NULL) {
        return -1;
    }

    for (int i = 0; i < ordem; i++) {
        mat[i] = calloc(ordem, sizeof(int));
        if (mat[i] == NULL) {
            return -1;
        }
    }

    preencheMatriz(mat, ordem);
    imprimeMatriz(mat, ordem);
    somaDiagonais(mat, ordem);
    mediaMatriz(mat, ordem);

    for (int i = 0; i < ordem; i++) {
        free(mat[i]);
    } free(mat);

    return 0;
}

void preencheMatriz(int **mat, int ordem) {
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            scanf("%d", *(mat + i) + j);
        }
    }
}

void imprimeMatriz(int ** mat, int ordem) {
    printf("\nMatriz completa:\n");
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("%d\t", *(*(mat +i) + j));
        } printf("\n");
    }
}

void somaDiagonais(int **mat, int ordem) {
    int somaDiagPrincipal = 0, somaDiagSecundaria = 0;
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            if (i == j) {
                somaDiagPrincipal += *(*(mat + i) + j);
            } 
            if (i + j == ordem-1) {
                somaDiagSecundaria += *(*(mat + i) + j);
            }
        }
    }
    printf("Soma da diagonal principal: %d\n", somaDiagPrincipal);
    printf("Soma da diagonal secundaria: %d\n", somaDiagSecundaria);
}

void mediaMatriz(int **mat, int ordem) {
    int soma = 0;
    float media = 0;
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            soma += *(*(mat + i) + j);
        }
    }
    media = ((float)soma / (ordem * ordem));
    printf("Media de todos os elementos: %0.2f\n", media);
}