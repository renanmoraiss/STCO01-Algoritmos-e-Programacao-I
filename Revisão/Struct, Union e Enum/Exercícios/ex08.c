#include <stdio.h>

struct Endereco {
    char rua[30];
    unsigned short int numero;
    char cidade[30];
};

typedef struct Endereco Endereco;

int main() {
    Endereco endereco;
    
    printf("Rua: ");
    scanf(" %29[^\n]", endereco.rua);
    printf("Numero: ");
    scanf("%hu", &endereco.numero);
    printf("Cidade: ");
    scanf(" %29[^\n]", endereco.cidade);

    printf("%s, %s-%hu", endereco.cidade, endereco.rua, endereco.numero);

    return 0;
}