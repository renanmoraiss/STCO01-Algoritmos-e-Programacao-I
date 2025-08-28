#include <stdio.h>
#include <stdlib.h>

int* gera_arranjo(int inicio, int fim);
int *gera_arranjo_errado(int inicio, int fim);

int main() {
    int *X; //declara um ponteiro-para-int
    int *W; //declara um ponteiro-para-int
    X = gera_arranjo(0, 10); //ponteiro X aponta para o endereco do vetor de int alocado dinamicamente 
    W = gera_arranjo(10, 20);
    //ponteiro W aponta para o endereco do vetor de int alocado dinamicamente

    printf("\nX = \n");
    for (int i = 0; i < 11; i++) { //printa o vetor que X esta apontando para o endereco
        printf("vetX[%d] = %d\n", i, *(X + i)); //ou X[i];
    } printf("\n");

    printf("W = \n"); //printa o vetor que W esta apontando para o endereco
    for (int i = 0; i < 11; i++) {
        printf("vetW[%d] = %d\n", i,*(W + i)); //ou W[i];
    } printf("\n");

    int tamanho = 100000000;
    //int Y[tamanho];
    /*   IMPROPRIO !!!!! */
    /*
    RELEMBRANDO:
    Stack -> normalmente tem alguns MB de memória (entre 1mb e 4mb);
    Heap -> pode atingir até alguns GB de memória.
    */

    int *Y;
    Y = (int*)malloc(sizeof(int) * tamanho); //nn eh necessario fazer esse cast com (int*) , pois mesmo malloc retornando um void*, eh convertido automaticamente.

    printf("Y = \n");
    for (int i = 0; i < tamanho; i++) {
        Y[i] = i + 20;
        printf("vet[%d] = %d\n", i, *(Y + i)); //ou Y[i];
    } printf("\n");

    /*
    Pode-se utilizar o calloc tbm, no entanto, a funcao calloc aloca o espaco de memoria desejado, mas zera todos os bits contidos nele. Enquanto isso, ao utilizar malloc, pode ter valores aleatorios nesses espacos na hora da alocacao, como lixo de memoria.
    */

    //tbm eh possivel mudar o tamanho de um array com o realloc

    int *XX;
    XX = realloc(X, sizeof(int) * 20000);
    if (XX == NULL) {
        return -1;
    }
    X = XX;

    free(X);
    free(W);
    free(Y);

    return 0;
}

int *gera_arranjo_errado(int inicio, int fim) { //FUNCAO ERRADA
    int tamanho = fim - inicio + 1;
    int X[tamanho];
    int *P = X;
    for (int i = 0; i < tamanho; i++) {
        X[i] = i + inicio;
    }
    return P;
}

//Imagino que a funcao acima esta errada, pois ele retorna um ponteiro que esta apontando para o endereço de uma variável alocada de forma estática, ou seja, está na Stack. Então, logo após que a função terminar de executar, toda a memória dela será liberada (incluindo as variáveis locais), então irá gerar um corportamento indefinido. 

int* gera_arranjo(int inicio, int fim) { //FUNCAO CORRETA
    int tamanho = fim - inicio + 1;
    int *P; //declara um ponteiro-para-int
    P = malloc(sizeof(int) * tamanho);
    for (int i = 0; i < tamanho; i++) { //preenche cada pos do vetor
        *(P + i) = i + inicio;
    }
    return P;
}

//A funcao acima esta correta, pois retorna um ponteiro que aponta para o endereço de um vetor alocado de forma dinamica, ou seja, sua memoria agora esta na Heap, entao mesmo apos da funcao terminar de executar, ela ainda será mantida na Heap e podera ser acessada em outras funcoes.