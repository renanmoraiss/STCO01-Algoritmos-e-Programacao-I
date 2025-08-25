#include <stdio.h>
#include <string.h>

union Registro {
    unsigned short int matricula;
    char nome[30];
};

typedef union Registro Registro;

int main() {
    Registro aluno;
    unsigned short int opcao;

    printf("Qual dado deseja armazenar:\n");
    printf("1. Matricula\n");
    printf("2. Nome\n");
    printf("Opcao escolhida: ");
    scanf("%hu", &opcao);

    switch(opcao) {
        case 1:
        printf("Matricula: ");
        scanf("%hu", &aluno.matricula);
        break;

        case 2:
        printf("Nome: ");
        scanf(" %29[^\n]", aluno.nome);
        break;

        default:
        return -1;
    }
    
    return 0;
}