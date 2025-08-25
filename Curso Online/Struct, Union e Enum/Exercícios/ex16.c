#include <stdio.h>
#include <string.h>

union Pessoa {
    char nome[30];
    unsigned short int idade;
};

typedef union Pessoa Pessoa;

int main() {
    Pessoa pes;
    unsigned short int opcao;

    printf("Qual dado deseja armazenar:\n");
    printf("1. Nome\n");
    printf("2. Idade\n");
    printf("Opcao escolhida: ");
    scanf("%hu", &opcao);

    switch(opcao) {
        case 1:
        printf("Nome: ");
        scanf(" %29[^\n]", pes.nome);
        break;

        case 2:
        printf("Idade: ");
        scanf("%hu", &pes.idade);
        break;

        default:
        return -1;
    }

    if (opcao == 1) {
        printf("Seu Nome: %s\n", pes.nome);
    } else {
        printf("Sua Idade: %hu\n", pes.idade);
    }

    return 0;
}