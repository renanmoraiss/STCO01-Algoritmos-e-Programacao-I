#include <stdio.h>

enum Notas {
    DO = 1,
    RE,
    MI,
    FA,
    SOL,
    LA,
    SI
};

typedef enum Notas Notas;

int main() {
    unsigned short int opcao;

    printf("Qual deseja tocar:\n");
    printf("1 - DO\n");
    printf("2 - RE\n");
    printf("3 - MI\n");
    printf("4 - FA\n");
    printf("5 - SOL\n");
    printf("6 - LA\n");
    printf("7 - SI\n");
    printf("Opcao: ");
    scanf("%hu", &opcao);

    switch(opcao) {
        case DO: printf("Do...\n"); break;
        case RE: printf("Re...\n"); break;
        case MI: printf("Mi... \n"); break;
        case FA: printf("Fa... \n"); break;
        case SOL: printf("Sol...\n"); break;
        case LA: printf("La... \n"); break;
        case SI: printf("Si... \n"); break;
        default: return -1;
    }
    
    return 0;
}