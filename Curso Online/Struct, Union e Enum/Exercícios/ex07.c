#include <stdio.h>
#include <string.h>

struct ContaBancaria {
    unsigned short int numero;
    char titular[30];
    double saldo;
};

typedef struct ContaBancaria ContaBancaria;

int main() {
    ContaBancaria conta_bancaria;
    unsigned short int opcao;
    double aux_deposito;
    double total_saldo = 0;

    printf("Numero da conta: ");
    scanf("%hu", &conta_bancaria.numero);
    printf("Titular: ");
    scanf(" %29[^\n]", conta_bancaria.titular);
    printf("Saldo: ");
    scanf("%lf", &conta_bancaria.saldo);

    printf("\nAgora que criou sua conta, qual operacao deseja realizar:\n");
    printf("1. Deposito\n");
    printf("2. Saque\n");
    printf("Opcao escolhida: ");
    scanf("%hu", &opcao);

    switch (opcao) {
        case 1:
        printf("Quanto deseja adicionar a sua conta: ");
        scanf("%lf", &aux_deposito);
        total_saldo += aux_deposito + conta_bancaria.saldo;
        conta_bancaria.saldo = total_saldo;
        printf("Agora voce possui R$ %0.2lf de Saldo\n", conta_bancaria.saldo);
        break;

        case 2:
        printf("Voce sacou R$ %0.2lf\n", conta_bancaria.saldo);
        break;

        default:
        return -1;
        
    }

    return 0;
}