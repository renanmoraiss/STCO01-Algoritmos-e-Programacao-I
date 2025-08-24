#include <stdio.h>
#include <string.h>

struct Livro {
    char titulo[30];
    char autor[30];
    short int ano_publicacao;
};

typedef struct Livro Livro;

int main() {
    Livro livros[3];

    for (int i = 0; i < 3; i++) {
        printf("Titulo: ");
        scanf(" %29[^\n]", livros[i].titulo);

        printf("Autor: ");
        scanf(" %29[^\n]", livros[i].autor);

        printf("Ano de publicacao: ");
        scanf("%hd", &livros[i].ano_publicacao);
    }

    for (int i = 0; i < 3; i++) {
        if (livros[i].ano_publicacao > 2000) {
            printf("\n===== DADOS DO LIVRO =====\n");
            printf("Titulo: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano de publicacao: %hd\n", livros[i].ano_publicacao);
        } else {
            continue;
        }
    }
    return 0;
}