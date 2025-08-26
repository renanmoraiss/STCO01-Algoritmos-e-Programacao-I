#include <stdio.h>
#include <stdlib.h>

void preencheMatriz(int **mat, int linhas, int colunas);
void imprimeMatriz(int** mat, int linhas, int colunas);
int somaMatriz(int ** mat, int linhas, int colunas);

int main() {
    int **matriz, linhas, colunas, soma = 0;

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
    soma = somaMatriz(matriz, linhas, colunas);

    printf("Soma = %d\n", soma);

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    } free(matriz);

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
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", *(*(mat + i) + j));
        } printf("\n");
    }
}

int somaMatriz(int ** mat, int linhas, int colunas) {
    int soma = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma += *(*(mat + i) + j);
        }
    }
    return soma;
}