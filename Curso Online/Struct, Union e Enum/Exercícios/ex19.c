#include <stdio.h>
#include <string.h>

union Endereco {
    char cep[10];
    char cidade[30];
};

typedef union Endereco Endereco;

int main() {
    Endereco endereco;

    strcpy(endereco.cep, "35134-210");
    printf("CEP: %s\n", endereco.cep);

    strcpy(endereco.cidade, "Itajuba");
    printf("Cidade: %s\n", endereco.cidade);

    printf("CEP: %s\n", endereco.cep); // erro, cep ja foi sobrescrito pela cidade.
    printf("Cidade: %s\n", endereco.cidade);
    
    strcpy(endereco.cidade, "Sao Paulo");
    printf("Cidade: %s\n", endereco.cidade);

    strcpy(endereco.cep, "23489-324");
    printf("CEP: %s\n", endereco.cep);

    printf("Cidade: %s\n", endereco.cidade); // erro, cidade ja foi sobrescrita pelo cep;

    return 0;
}