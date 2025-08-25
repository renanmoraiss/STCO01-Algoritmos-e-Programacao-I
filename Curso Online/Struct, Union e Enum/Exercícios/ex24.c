#include <stdio.h>

enum Cores {
    Vermelho = 1,
    Verde,
    Amarelo,
    Azul,
    Violeta,
    Preto
};

typedef enum Cores Cores;

int main() {
    unsigned short int opcao;

    printf("Cor:\n");
    printf("1 - Vermelho\n");
    printf("2 - Verde\n");
    printf("3 - Amarelo\n");
    printf("4 - Azul\n");
    printf("5 - Violeta\n");
    printf("6 - Preto\n");
    printf("Opcao: ");
    scanf("%hu", &opcao);

    switch(opcao) {
        case Vermelho: printf("Vermelho\n"); break;
        case Verde: printf("Verde\n"); break;
        case Amarelo: printf("Amarelo\n"); break;
        case Azul: printf("Azul\n"); break;
        case Violeta: printf("Violeta\n"); break;
        case Preto: printf("Preto\n"); break;
        default: return -1;
    }
    
    return 0;
}