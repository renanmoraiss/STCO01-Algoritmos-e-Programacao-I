#include <stdio.h>
#include <stdlib.h>

void preencheMatriz(int** mat, int linhas, int colunas);
void imprimeMatriz(int **mat, int linhas, int colunas);
void imprimeMatrizTransposta(int ** mat, int linhas, int colunas);

int main() {
    int **matriz, linhas, colunas;

    printf("Linhas: ");
    scanf("%d", &linhas);
    printf("Colunas: ");
    scanf("%d", &colunas);

    matriz = calloc(linhas, sizeof(int*));

    if (matriz == NULL) {
        return -1;
    }

    for (int i = 0; i < linhas; i++) {
        matriz[i] = calloc(colunas, sizeof(int));
        if (matriz[i] == NULL) {
            return -1;
        }
    }

    preencheMatriz(matriz, linhas, colunas);
    imprimeMatriz(matriz, linhas, colunas);
    imprimeMatrizTransposta(matriz, linhas, colunas); //so deixar o for de colunas mais externo.

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    } free(matriz);

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
    printf("\nMatriz normal:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", *(*(mat + i) + j));
        } printf("\n");
    }
}

void imprimeMatrizTransposta(int ** matriz, int linhas, int colunas) {
    printf("\nMatriz transposta:\n");
    for (int j = 0; j < colunas; j++) {
        for (int i = 0; i < linhas; i++) {
            printf("%d\t", *(*(matriz + i) + j));
        } printf("\n");
    }
}