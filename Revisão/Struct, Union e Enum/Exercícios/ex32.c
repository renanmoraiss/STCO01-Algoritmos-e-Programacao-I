#include <stdio.h>

struct Aluno {
    char nome[30];
    unsigned short int matricula;
    char curso[30];
};

typedef struct Aluno Aluno;

int main() {
    Aluno alunos[5];

    for (int i = 0; i < 5; i++) {
        printf("Nome: ");
        scanf(" %29[^\n]", alunos[i].nome);
        printf("Matricula: ");
        scanf("%hu", &alunos[i].matricula);
        printf("Curso: ");
        scanf(" %29[^\n]", alunos[i].curso);
    }

    for (int i = 0; i < 5; i++) {
        printf("\n===== DADOS DO ALUNO %d =====\n", i+1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %hu\n", alunos[i].matricula);
        printf("Curso: %s\n", alunos[i].curso);
    }
    
    return 0;
}