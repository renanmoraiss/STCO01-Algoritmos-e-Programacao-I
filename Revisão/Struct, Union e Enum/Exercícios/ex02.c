#include <stdio.h>
#include <string.h>

struct Aluno {
    short int matricula;
    char nome[30];
    float nota;
};

typedef struct Aluno Aluno;

int main() {
    Aluno alunos[5];

    for (int i = 0; i < 5; i++) {
        printf("Matricula: ");
        scanf("%hd", &alunos[i].matricula);

        printf("Nome: ");
        scanf(" %29[^\n]", alunos[i].nome);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }

    for (int i = 0; i < 5; i++) {
        printf("\n===== DADOS DO ALUNO %d =====\n", i+1);
        printf("Matricula: %hd\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Nota: %0.2f\n", alunos[i].nota);
    }

    return 0;
}