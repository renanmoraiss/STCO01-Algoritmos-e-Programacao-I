#include <stdio.h>
#include <string.h>

union Pessoa {
    char nome[100]; //100 bytes -> e é o tamanho da union tbm.
    int idade;
};

typedef union Pessoa Pessoa;

int main() {
    Pessoa pes; //apenas uma pessoa.

    strcpy(pes.nome, "renan");
    printf("Nome: %s\n", pes.nome);

    pes.idade = 18; //sobrescreve 'pes.nome'.
    printf("Idade: %d\n", pes.idade);

    /*como todos os membros da union compartilham o mesmo espaço de memória, quando eu fiz 'pes.idade = 18', o valor dela sobrescreveu o valor de 'pes.nome = "renan"', então se eu tentar imprimir 'pes.nome' novamente, irá imprimir um conteúdo corrompido / vazio.*/

    printf("Nome: %s\n", pes.nome); //vazio ou lixo
    printf("Idade: %d\n", pes.idade); //imprime corretamente

    printf("Pes tem %zu btyes\n", sizeof(pes));
    return 0;
}