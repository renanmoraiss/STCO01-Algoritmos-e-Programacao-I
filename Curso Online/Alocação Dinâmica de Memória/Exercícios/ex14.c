#include <stdio.h>
#include <stdlib.h>

void preencheMatriz(int **mat, int linhas, int colunas);
void imprimeMatriz(int** mat, int linhas, int colunas);
void imprimeDiagPrincipal(int ** mat, int linhas, int colunas);
void imprimeDiagSecundaria(int** mat, int linhas, int colunas);

int main() {
    int** mat, linhas, colunas;

    printf("Linhas: ");
    scanf("%d", &linhas);
    printf("Colunas: ");
    scanf("%d", &colunas);

    if (linhas != colunas) {
        printf("A matriz deve ser quadrada\n");
        return -1;
    }

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
    imprimeMatriz(mat, linhas, colunas);
    imprimeDiagPrincipal(mat, linhas, colunas);
    imprimeDiagSecundaria(mat, linhas, colunas);

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

void imprimeMatriz(int** mat, int linhas, int colunas) {
    printf("\nMatriz completa:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", *(*(mat + i) + j));
        } printf("\n");
    }
}

void imprimeDiagPrincipal(int ** mat, int linhas, int colunas) {
    printf("\nDiagonal principal:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if(i == j) {
                printf("%d", *(*(mat + i) + j));
            } else {
                printf("\t");
            }
        } printf("\n");
    }
}

void imprimeDiagSecundaria(int** mat, int linhas, int colunas) {
    printf("\nDiagonal secundaria:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i + j == linhas - 1) {
                printf("%d", *(*(mat + i) + j));
            } else {
                printf("\t");
            }
        } printf("\n");
    }
}