#include <stdio.h>
#include <string.h>

struct Contato {
    char nome[30];
    int ano_nasc;
    char telefone[20];
    char email[50];
};

typedef struct Contato Contato;

struct Agenda {
    Contato contatos[100]; //vetor de até 100 contatos da struct Contato.
};

typedef struct Agenda Agenda;

int main() {
    Agenda agenda;
    for (int i = 0; i < 3; i++) {
        printf("Nome: ");
        scanf(" %29[^\n]", agenda.contatos[i].nome);
        printf("Ano de nascimento: ");
        scanf("%d", &agenda.contatos[i].ano_nasc);
        printf("Telefone: ");
        scanf(" %19[^\n]", agenda.contatos[i].telefone);
        printf("Email: ");
        scanf(" %49[^\n]", agenda.contatos[i].email);
    }
    for (int i = 0; i < 3; i++) {
        printf("===== DADOS DO CONTATO %d =====\n", i+1);
        printf("Nome: %s\n", agenda.contatos[i].nome);
        printf("Ano de nascimento: %d\n", agenda.contatos[i].ano_nasc);
        printf("Telefone: %s\n", agenda.contatos[i].telefone);
        printf("Email: %s\n", agenda.contatos[i].email);
    }
    return 0;
}