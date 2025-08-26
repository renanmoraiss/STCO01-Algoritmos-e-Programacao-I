#include <stdio.h>
#include <stdlib.h>

    /*
    1. malloc: 
            aloca um bloco de memória contíguo com o tamanho especificado em bytes.
            não inicializa o conteúdo da memória alocada, podendo conter lixo de memória.
            recebe apenas um argumento: o tamanho em bytes da memória a ser alocada.
            retorna um ponteiro para o início do bloco de memória alocado ou NULL em caso de falha.

    2. calloc:
            aloca um bloco de memória contíguo com o tamanho especificado, semelhante ao malloc.
            inicializa todos os bits do bloco de memória alocado em 0.
            recebe dois argumentos: a qtd de elementos a serem alocados e o tamanho de cada elemento em bytes.
            retorna um ponteiro para o início do bloco de memória alocado ou NULL em caso de falha.
    */

int main() {
    int *x;
    char *y;

    //x = malloc(sizeof(int));
    x = calloc(1, sizeof(int));
    y = calloc(1, sizeof(char));

    if (x == NULL) {
        printf("Erro\n");
        return -1;
    }

    printf("valor antigo de x = %d\n", *x);
    *x = 50;
    printf("valor novo de x = %d\n", *x);

    printf("\n");

    printf("valor antigo de y = %c\n", *y);
    *y = 'R';
    printf("valor novo de y = %c\n", *y);

    free(x);
    free(y);

    return 0;
}