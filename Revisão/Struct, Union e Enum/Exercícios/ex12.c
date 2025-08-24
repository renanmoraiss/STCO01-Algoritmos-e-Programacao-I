#include <stdio.h>
#include <string.h>

union Dado {
    char cpf[15];
    char cnpj[20];
};

typedef union Dado Dado;

int main() {
    Dado dado;
    unsigned short int opcao;

    printf("Qual deseja armazenar:\n");
    printf("1. CPF\n");
    printf("2. CNPJ\n");
    printf("Opcao escolhida: ");
    scanf("%hu", &opcao);

    switch(opcao) {
        case 1:
        printf("CPF: ");
        scanf(" %14[^\n]", dado.cpf);
        break;

        case 2:
        printf("CNPJ: ");
        scanf(" %19[^\n]", dado.cnpj);
        break;

        default:
        return -1;
    }

    if (opcao == 1) {
        printf("Seu CPF: %s\n", dado.cpf);
    } else {
        printf("Seu CNPJ: %s\n", dado.cnpj);
    }

    return 0;
}