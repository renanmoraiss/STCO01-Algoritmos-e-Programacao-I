#include <stdio.h>
#include <stdlib.h>

void preencheMatriz(int **matriz, int linhas, int colunas);
void imprimeMatriz(int ** matriz, int linhas, int colunas);
void menorMaiorValorLinha(int** matriz, int linhas, int colunas);
void menorMaiorValorColuna(int ** matriz, int linhas, int colunas);

int main() {
    int **matriz, linhas, colunas;
    
    printf("Linhas: ");
    scanf("%d", &linhas);
    printf("Colunas: ");
    scanf("%d", &colunas);

    matriz = malloc(sizeof(int*) * linhas);

    if (matriz == NULL) {
        return 0;
    }

    for (int i = 0; i < linhas; i++) {
        matriz[i] = malloc(sizeof(int) * colunas);
        if (matriz[i] == NULL) {
            return -1;
        }
    }

    preencheMatriz(matriz, linhas, colunas);
    imprimeMatriz(matriz, linhas, colunas);
    menorMaiorValorLinha(matriz, linhas, colunas);
    menorMaiorValorColuna(matriz, linhas, colunas);

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    } free(matriz);

    return 0;
}

void preencheMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("[%d][%d] = ", i, j);
            scanf("%d", *(matriz + i) + j);
        }
    }
}

void imprimeMatriz(int ** matriz, int linhas, int colunas) {
    printf("\nMatriz completa:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", *(*(matriz + i) + j));
        } printf("\n");
    }
}

void menorMaiorValorLinha(int** matriz, int linhas, int colunas) {
    int maiorValorLinha, menorValorLinha;
    for (int i = 0; i < linhas; i++) {
        maiorValorLinha = *(*(matriz + i) + 0);
        menorValorLinha = *(*(matriz + i) + 0);
        for (int j = 0; j < colunas; j++) {
            if (*(*(matriz + i) + j) > maiorValorLinha) {
                maiorValorLinha = *(*(matriz + i) + j);
            }
            else if (*(*(matriz + i) + j) < menorValorLinha) {
                menorValorLinha = *(*(matriz + i) + j);
            }
        } 
        printf("\nMaior valor da linha %d = %d\n", i, maiorValorLinha);
        printf("Menor valor da linha %d = %d\n", i, menorValorLinha);
    }
}

void menorMaiorValorColuna(int ** matriz, int linhas, int colunas) {
    int maiorValorColuna, menorValorColuna;
    for (int j = 0; j < colunas; j++) {
        maiorValorColuna = *(*(matriz + 0) + j);
        menorValorColuna = *(*(matriz + 0) + j);
        for (int i = 0; i < linhas; i++) {
            if (*(*(matriz + i) + j) > maiorValorColuna) {
                maiorValorColuna = *(*(matriz + i) + j);
            }
            else if (*(*(matriz + i) + j) < menorValorColuna) {
                menorValorColuna = *(*(matriz + i) + j);
            }
        }
        printf("\nMaior valor da coluna %d = %d\n", j, maiorValorColuna);
        printf("Menor valor da coluna %d = %d\n", j, menorValorColuna);
    }
}