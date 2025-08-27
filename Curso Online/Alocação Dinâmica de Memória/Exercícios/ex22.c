#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Frases {
    char frase1[35];
    char frase2[30];
};

void modificaMatriz(int ** matriz, int ordem);
void imprimeMatriz(int** matriz, int ordem, char frase[]);

int main() {
    union Frases frase;
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

    strcpy(frase.frase1, "Matriz inicial");
    imprimeMatriz(mat, ordem, frase.frase1);

    modificaMatriz(mat, ordem);

    strcpy(frase.frase2, "Matriz identidade");
    imprimeMatriz(mat, ordem, frase.frase2);

    for (int i = 0; i < ordem; i++) {
        free(mat[i]);
    } free(mat);

    return 0;
}

void imprimeMatriz(int ** matriz, int ordem, char frase[]) {
    printf("\n%s:\n", frase);
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("%d\t", *(*(matriz + i) + j));
        } printf("\n");
    }
}

void modificaMatriz(int** matriz, int ordem) {
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            if (i == j) {
                *(*(matriz + i) + j) = 1;
            }
        }
    }
}