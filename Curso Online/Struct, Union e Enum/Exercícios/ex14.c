#include <stdio.h>
#include <string.h>

union Moeda {
    float real;
    float dolar;
};

typedef union Moeda Moeda;

int main() {
    Moeda moeda;
    unsigned short int opcao;

    printf("Qual moeda deseja armazenar:\n");
    printf("1. Dolar\n");
    printf("2. Real\n");
    printf("Opcao escolhida: ");
    scanf("%hu", &opcao);

    switch(opcao) {
        case 1:
        printf("Quantos dolares deseja armazenar: ");
        scanf("%f", &moeda.dolar);
        break;

        case 2:
        printf("Quantos reais deseja armazenar: ");
        scanf("%f", &moeda.real);
        break;

        default:
        return -1;
    }

    if (opcao == 1) {
        printf("Voce tem US$ %0.2f armazenados\n", moeda.dolar);
    } else {
        printf("Voce tem R$ %0.2f armazenados\n", moeda.real);
    }
    return 0;
}