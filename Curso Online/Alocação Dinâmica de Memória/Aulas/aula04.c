#include <stdio.h>
#include <stdlib.h>

    /*
    Como percorrer uma matriz dinamica com aritmetica de ponteiros...
    */

int main() {
    int **mat;
    int linhas, colunas;

    printf("Total de linhas: ");
    scanf("%d", &linhas);
    printf("Total de colunas: ");
    scanf("%d", &colunas);

    mat = malloc(sizeof(int*) * linhas);

    for (int i = 0; i < linhas; i++) {
        mat[i] = malloc(sizeof(int) * colunas);
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", *(mat + i) + j); //aritmetica de ponteiros para ler matriz dinamica
        }
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", *(*(mat + i) + j)); //aritmetica de ponteiros para printar matriz dinamica
        } printf("\n");
    }

    for (int i = 0; i < linhas; i++) {
        free(mat[i]);
    } free(mat);

    return 0;
}