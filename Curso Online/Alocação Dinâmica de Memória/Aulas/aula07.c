#include <stdio.h>
#include <stdlib.h>

    /*
    Como passar uma matriz dinamica como parametro...
    */

    void imprimeMatriz(int **mat, int linhas, int colunas);
    int somaMatriz(int **mat, int linhas, int colunas);

int main() {
    int **mat, linhas, colunas;
    int soma;

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

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", *(mat + i) + j);
        }
    }

    imprimeMatriz(mat, linhas, colunas);
    soma = somaMatriz(mat, linhas, colunas);

    printf("Soma = %d\n", soma);

    for (int i = 0; i < linhas; i++) {
        free(mat[i]);
    } free(mat);

    return 0;
}

void imprimeMatriz(int **mat, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", *(*(mat + i) + j));
        } printf("\n");
    }
}

int somaMatriz(int **mat, int linhas, int colunas) {
    int soma = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma += *(*(mat + i) + j);
        }
    }
    return soma;
}