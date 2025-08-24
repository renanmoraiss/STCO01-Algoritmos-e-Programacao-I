#include <stdio.h>
#include <string.h>

union Telefone {
    char tel_fixo[10];
    char celular[16];
};

typedef union Telefone Telefone;

int main() {
    Telefone telefone;
    unsigned short int opcao;

    printf("Qual telefone deseja armazenar:\n");
    printf("1. Telefone Fixo\n");
    printf("2. Numero de Celular\n");
    printf("Opcao escolhida: ");
    scanf("%hu", &opcao);

    switch(opcao) {
        case 1:
        printf("Telefone Fixo: ");
        scanf(" %9[^\n]", telefone.tel_fixo);
        break;

        case 2:
        printf("Numero de Celular: ");
        scanf(" %15[^\n]", telefone.celular);
        break;

        default:
        return -1;
    }

    if (opcao == 1) {
        printf("Seu Telefone Fixo: %s\n", telefone.tel_fixo);
    } else {
        printf("Seu Numero de Celular: %s\n", telefone.celular);
    }
    return 0;
}