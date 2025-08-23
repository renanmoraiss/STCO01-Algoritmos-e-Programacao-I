#include <stdio.h>
#include <string.h>

struct Aluno {
    char matricula[5];
    char nome[30]; 
    char curso[30];
    char data_nascimento[11];
} aluno; //pode-se usar assim ao inves de declarar a variável que vai passar nessa struct na main.


int main() {
    printf("Matricula: ");
    scanf("%s", aluno.matricula);
    printf("Nome: ");
    scanf(" %29[^\n]", aluno.nome);
    printf("Curso: ");
    scanf(" %29[^\n]", aluno.curso);
    printf("Ano de nascimento (dd/mm/yyyy): ");
    scanf(" %10[^\n]", aluno.data_nascimento);

    printf("Matricula: %s\n", aluno.matricula);
    printf("Nome: %s\n", aluno.nome);
    printf("Curso: %s\n", aluno.curso);
    printf("Data de nascimento: %s\n", aluno.data_nascimento);
    return 0;
}