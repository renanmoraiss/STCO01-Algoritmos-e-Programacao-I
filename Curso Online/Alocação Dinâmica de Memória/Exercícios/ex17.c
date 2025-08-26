#include <stdio.h>
#include <stdlib.h>

void preencheMatriz(int **mat, int linhas, int colunas);
void maiorElementoPorLinha(int ** mat, int linhas, int colunas);

int main() {
    int **mat, linhas, colunas;

    printf("Linhas: ");
    scanf("%d", &linhas);
    printf("Colunas: ");
    scanf("%d", &colunas);

    mat = calloc(linhas, sizeof(int*));

    if (mat == NULL) {
        return -1;
    }

    for (int i = 0; i < linhas; i++) {
        mat[i] = calloc(colunas, sizeof(int));
        if (mat[i] == NULL) {
            return -1;
        }
    }

    preencheMatriz(mat, linhas, colunas);
    maiorElementoPorLinha(mat, linhas, colunas);

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

void maiorElementoPorLinha(int ** mat, int linhas, int colunas) {
    int maiorElementoDaLinha;
    printf("\n");
    for (int i = 0; i < linhas; i++) {
        maiorElementoDaLinha = *(*(mat + i)) + 0;
        for (int j = 0; j < colunas; j++) {
            if (*(*(mat + i) + j) > maiorElementoDaLinha) {
                maiorElementoDaLinha = *(*(mat + i) + j);
            }
        } printf("Maior elemento da linha %d = %d\n", i+1, maiorElementoDaLinha);
    }
}