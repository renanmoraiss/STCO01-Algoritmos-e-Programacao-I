#include <stdio.h>
#include <string.h>

union Teste {
    short int n1;
    float f1;
    char vet[20];
};

typedef union Teste Teste;

int main() {
    Teste tipo;

    tipo.n1 = 10;
    printf("Int: %hd; Bytes: %zu\n", tipo.n1, sizeof(tipo.n1));

    tipo.f1 = 15.15;
    printf("Float: %0.2f; Bytes: %zu\n", tipo.f1, sizeof(tipo.f1));

    strcpy(tipo.vet, "Eu amo Programar");
    printf("Char vet: %s; Bytes: %zu\n", tipo.vet, sizeof(tipo.vet));

    printf("Int: %hd; Bytes: %zu\n", tipo.n1, sizeof(tipo.n1)); // lixo de memória
    printf("Float: %0.2f; Bytes: %zu\n", tipo.f1, sizeof(tipo.f1)); // lixo de memória

    tipo.n1 = 50;
    printf("Int: %hd; Bytes: %zu\n", tipo.n1, sizeof(tipo.n1));

    printf("Char vet: %s; Bytes: %zu\n", tipo.vet, sizeof(tipo.vet)); // lixo de memória
    printf("Float: %0.2f; Bytes: %zu\n", tipo.f1, sizeof(tipo.f1)); // lixo de memória

    tipo.f1 = 15.15;
    printf("Float: %0.2f; Bytes: %zu\n", tipo.f1, sizeof(tipo.f1));
    printf("Int: %hd; Bytes: %zu\n", tipo.n1, sizeof(tipo.n1)); // lixo de memória

    return 0;
}