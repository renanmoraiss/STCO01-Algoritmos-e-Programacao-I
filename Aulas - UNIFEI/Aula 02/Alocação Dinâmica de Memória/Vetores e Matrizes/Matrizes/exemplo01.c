/*
Matrizes bidimensionais são implementadas como vetores de vetores. Uma matriz com m linhas e n colunas eh um vetor 
de m elementos cada um dos quais eh um vetor de n elementos.

O seguinte fragmento de código faz a alocação dinamica de uma tal matriz:
*/

int **matriz;
matriz = malloc(sizeof(int*) * m); //m eh o numero de linhas
for (int i = 0; i < m; i++) {
    matriz[i] = malloc(sizeof(int) * n); //n eh o numero de colunas
    if (matriz[i] == NULL) {
        return -1;
    }
}