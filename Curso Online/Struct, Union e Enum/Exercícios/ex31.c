#include <stdio.h>

struct Pessoa {
    char nome[30];
    char endereco[30];
    unsigned short int idade;
};

typedef struct Pessoa Pessoa;

int main() {
    Pessoa pes;

    printf("Nome: ");
    scanf(" %29[^\n]", pes.nome);
    printf("Idade: ");
    scanf("%hu", &pes.idade);
    printf("Endereco: ");
    scanf(" %29[^\n]", pes.endereco);

    printf("\n===== DADOS DO USUARIO =====\n");
    printf("Nome: %s\n", pes.nome);
    printf("Idade: %hu\n", pes.idade);
    printf("Endereco: %s\n", pes.endereco);

    return 0;
}