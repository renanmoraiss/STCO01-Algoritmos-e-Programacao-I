#include <stdio.h>
#include <string.h>

struct Filme {
    char titulo[30];
    unsigned short int duracao;
    char genero[30];
};

typedef struct Filme Filme;

int main() {
    Filme filmes[5];

    for (int i = 0; i < 5; i++) {
        printf("Titulo: ");
        scanf(" %29[^\n]", filmes[i].titulo);
        printf("Duracao (minutos): ");
        scanf("%hu", &filmes[i].duracao);
        printf("Genero: ");
        scanf(" %29[^\n]", filmes[i].genero);
    }

    for (int i = 0; i < 5; i++) {
        if (strcmp(filmes[i].genero, "Acao") == 0) {
            printf("\n===== DADOS DO FILME =====\n");
            printf("Titulo: %s\n", filmes[i].titulo);
            printf("Duracao: %hu minutos\n", filmes[i].duracao);
            printf("Genero: %s\n", filmes[i].genero);
        }
        else {
            continue;
        }
    }

    return 0;
}