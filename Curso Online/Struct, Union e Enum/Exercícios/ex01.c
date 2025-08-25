#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[30];
    int idade;
    float altura;
};

typedef struct Pessoa Pessoa;

int main() {
    Pessoa pessoa;

    printf("Nome: ");
    scanf(" %29[^\n]", pessoa.nome);
    printf("Idade: ");
    scanf("%d", &pessoa.idade);
    printf("Altura: ");
    scanf("%f", &pessoa.altura);

    printf("\n===== DADOS DO USUARIO =====\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Altura: %0.2f\n", pessoa.altura);

    return 0;
}