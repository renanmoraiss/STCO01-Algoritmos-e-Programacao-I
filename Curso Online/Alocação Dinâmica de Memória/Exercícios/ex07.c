#include <stdio.h>
#include <stdlib.h>

void preencheMatriz(int **mat, int linhas, int colunas);
void imprimeMatriz(int **mat, int linhas, int colunas);

int main() {
    int **mat, linhas, colunas;

    printf("Linhas: ");
    scanf("%d", &linhas);
    printf("Colunas: ");
    scanf("%d", &colunas);

    mat = calloc(linhas, sizeof(int*));

    for (int i = 0; i < linhas; i++) {
        mat[i] = calloc(colunas, sizeof(int));
    }

    preencheMatriz(mat, linhas, colunas);
    imprimeMatriz(mat, linhas, colunas);

    for (int i = 0; i < linhas; i++) {
        free(mat[i]);
    } free(mat);

    return 0;
}

void preencheMatriz(int **mat, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", *(mat + i) + j);
        }
    }
}

void imprimeMatriz(int **mat, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", *(*(mat + i) + j));
        } printf("\n");
    }
}