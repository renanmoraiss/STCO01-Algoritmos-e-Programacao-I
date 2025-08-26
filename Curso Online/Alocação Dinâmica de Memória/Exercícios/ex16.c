#include <stdio.h>
#include <stdlib.h>

void preencheMatriz(int** mat, int linhas, int colunas);
void imprimeMatriz(int **mat, int linhas, int colunas);
void somaDeMatrizes(int **mat1, int **mat2, int **mat3, int linhas, int colunas);

int main() {
    int **matriz, **matriz2, **matriz3, linhas, colunas;

    printf("Linhas: ");
    scanf("%d", &linhas);
    printf("Colunas: ");
    scanf("%d", &colunas);

    matriz = malloc(sizeof(int*) * linhas);
    matriz2 = malloc(sizeof(int*) * linhas);
    matriz3 = malloc(sizeof(int*) * linhas);

    if ((matriz == NULL) || (matriz2 == NULL) || (matriz3 == NULL)) {
        return -1;
    }

    for (int i = 0; i < linhas; i++) {
        matriz[i] = malloc(sizeof(int) * colunas);
        matriz2[i] = malloc(sizeof(int) * colunas);
        matriz3[i] = malloc(sizeof(int) * colunas);
        if ((matriz[i] == NULL) || (matriz2[i] == NULL) || (matriz3[i] == NULL)) {
            return -1;
        }
    }

    preencheMatriz(matriz, linhas, colunas);
    preencheMatriz(matriz2, linhas, colunas);
    
    imprimeMatriz(matriz, linhas, colunas);
    imprimeMatriz(matriz2, linhas, colunas);

    somaDeMatrizes(matriz, matriz2, matriz3, linhas, colunas);

    imprimeMatriz(matriz3, linhas, colunas);

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
        free(matriz2[i]);
        free(matriz3[i]);
    } free(matriz);
    free(matriz2);
    free(matriz3);

    return 0;
}

void preencheMatriz(int** mat, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", *(mat + i) + j);
        }
    }
}

void imprimeMatriz(int **mat, int linhas, int colunas) {
    printf("\nMatriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", *(*(mat + i) + j));
        } printf("\n");
    }
}

void somaDeMatrizes(int **mat1, int **mat2, int **mat3, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            *(*(mat3 + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
}