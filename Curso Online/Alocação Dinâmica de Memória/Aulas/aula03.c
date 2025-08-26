#include <stdio.h>
#include <stdlib.h>

    /*
    Como alocar matriz de forma dinamica... (vetor de vetores)
    */

int main() {
    int **mat;
    int linhas, colunas;

    printf("Total de linhas: ");
    scanf("%d", &linhas);
    printf("Total de colunas: ");
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
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", mat[i][j]);
        } printf("\n");
    }

    for (int i = 0; i < linhas; i++) {
        free(mat[i]);
    } free(mat);

    return 0;
}