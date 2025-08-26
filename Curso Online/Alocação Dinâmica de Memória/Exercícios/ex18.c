#include <stdio.h>
#include <stdlib.h>

void preencheMatriz(int ** mat, int linhas, int colunas);
void imprimeBordaMatriz(int** mat, int linhas, int colunas);

int main() {
    int **mat, linhas, colunas;
    printf("Linhas: ");
    scanf("%d", &linhas);
    printf("Colunas: ");
    scanf("%d", &colunas);

    mat = malloc(sizeof(int*) * linhas);
    
    if (mat == NULL) {
        return -1;
    }

    for (int i = 0; i < linhas; i++) {
        mat[i] = malloc(sizeof(int) * colunas);
        if (mat[i] == NULL) {
            return -1;
        }
    }

    preencheMatriz(mat, linhas, colunas);
    imprimeBordaMatriz(mat, linhas, colunas);

    for (int i = 0; i < linhas; i++) {
        free(mat[i]);
    } free(mat);


    return 0;
}

void preencheMatriz(int ** mat, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", *(mat + i) + j);
        }
    }
}

void imprimeBordaMatriz(int** mat, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if ((i == 0) || (i == linhas - 1) || (j == 0) || (j == colunas - 1)) {
                printf("%d\t", *(*(mat + i) + j));
            } else {
                printf("\t");
            }
        } printf("\n");
    }
}