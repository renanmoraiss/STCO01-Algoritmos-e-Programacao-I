#include <stdio.h>

enum Moeda {
    Dolar = 1,
    Euro
};

typedef enum Moeda Moeda;

int main() {
    unsigned short int opcao;
    double din;

    printf("Voce tem quantos reais: ");
    scanf("%lf", &din);

    printf("Deseja converter para:\n");
    printf("1 - Dolar\n");
    printf("2 - Euro\n");
    printf("Opcao: ");
    scanf("%hu", &opcao);

    switch(opcao) {
        case Dolar: printf("%0.2lf USD\n", din * 0.1844); break;
        case Euro: printf("%0.2lf EUR\n", din * 0.1575); break;
        default: return -1;
    }
    return 0;
}