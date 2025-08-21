#include <stdio.h>

void incrementa(int * contador); //ou int* contador ou int * contador

int main() {
    int contador = 10;
    printf("ANTES:\n");
    printf("O contador vale = %d\n", contador);
    printf("Endereco de 'contador': %p\n", &contador);

    incrementa(&contador); //& passa o endereço, tendo em vista que o parametro da funcao 'incrementa' é um ponteiro para inteiro.

    printf("DEPOIS:\n");
    printf("O contador vale = %d\n", contador);
    printf("Endereco de 'contador': %p\n", &contador);
    return 0;
}

void incrementa(int *contador) { //recebe um endereço de memória
    printf("NA FUNCAO:\n");
    printf("ANTES:\n");
    printf("O contador vale = %d\n", *contador); //imprime o valor
    printf("Endereco de 'contador': %p\n", contador); //deve imprimir o mesmo endereço de memória da variável 'contador'.

    /*
    SEMPRE que for INCREMENTAR ou DECREMENTAR o VALOR APONTADO por um ponteiro,
    coloque o ponteiro entre parênteses e depois ++ ou --, ou use antes, como:
    (*contador)++  ou  ++(*contador).
    Isso altera o valor da variável original apontada pelo ponteiro, não o ponteiro em si.
    */
    printf("DEPOIS:\n");
    printf("O contador vale = %d\n", ++(*contador)); //incrementa 1 no valor do ponteiro e depois imprime. (pré incremento)
    printf("Endereco de 'contador': %p\n", contador);
}

/*
As quatro impressões de endereço devem imprimir o mesmo endereço!
*/