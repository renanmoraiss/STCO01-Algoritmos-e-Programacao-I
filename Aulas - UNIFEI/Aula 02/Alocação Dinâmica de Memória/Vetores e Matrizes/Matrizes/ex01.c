/*
ENUNCIADO
1. Escreva uma função que desaloque a matriz alocada no exemplo 01. Quais devem ser os parametros da função?
*/

#include <stdio.h>
#include <stdlib.h>

void desaloca(int ***matriz, int m); //m eh o nmr de linhas

int main() {
    int **matriz;
    matriz = malloc(sizeof(int*) * m); //suponha que m eh o nmr de linhas
    for (int i = 0; i < m; i++) {
        matriz[i] = malloc(sizeof(int) * n); //suponha que n eh o nmr de colunas
        if (matriz[i] == NULL) {
            return -1;
        }
    }
    desaloca(&matriz, m);
    return 0;
}

void desaloca(int ***matriz, int m) {
    for (int i = 0; i < m; i++) {
        free((*matriz)[i]); //libera cada linha
    } 
    free(*matriz);
    *matriz = NULL;
}

/*
RESPOSTA
-> Código feito + os parametros da funcao devem ser um ponteiro que aponta para a matriz e o nmr de linhas.
*/