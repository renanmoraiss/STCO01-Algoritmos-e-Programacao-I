#include <stdio.h>
#include <string.h>

struct Produto {
    char nome[30];
    float preco;
    short int quantidade;
};

typedef struct Produto Produto;

int main() {
    Produto produto;
    float valorTotal_estoque;

    printf("Nome: ");
    scanf(" %29[^\n]", produto.nome);
    printf("Preco: ");
    scanf("%f", &produto.preco);
    printf("Quantidade: ");
    scanf("%hd", &produto.quantidade);

    valorTotal_estoque = ((float)produto.quantidade * produto.preco);
    printf("\n===== DADOS DO PRODUTO =====\n");
    printf("Nome: %s\n", produto.nome);
    printf("Preco: %0.2f\n", produto.preco);
    printf("Quantidade: %hd\n", produto.quantidade);

    printf("\n===== VALOR TOTAL EM ESTOQUE =====\n");
    printf("R$ %0.2f\n", valorTotal_estoque);

    return 0;
}