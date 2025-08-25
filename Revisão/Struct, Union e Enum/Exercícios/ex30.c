#include <stdio.h>

enum OpcaoMenu {
    Cadastrar = 1,
    Consultar,
    Atualizar,
    Deletar
};

typedef enum OpcaoMenu OpcaoMenu;

int main() {
    unsigned short int opcao;

    printf("Menu:\n");
    printf("1 - Cadastrar\n");
    printf("2 - Consultar\n");
    printf("3 - Atualizar\n");
    printf("4 - Deletar\n");
    printf("Opcao: ");
    scanf("%hu", &opcao);

    switch(opcao) {
        case Cadastrar: printf("Cadastrando usuario...\n"); break;
        case Consultar: printf("Consultando usuario...\n"); break;
        case Atualizar: printf("Atualizando usuario...\n"); break;
        case Deletar: printf("Deletando usuario...\n"); break;
        default: return -1;
    }

    return 0;
}