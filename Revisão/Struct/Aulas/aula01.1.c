#include <stdio.h>
#include <string.h>

struct Aluno {
    char matricula[5]; //4 espaços, pois o último caractere em um vetor de char é o '/0'.
    char nome[30]; //29 espaços + '/0'
    char curso[30]; //29 espaços + '/0'
    char data_nascimento[11]; //10 espaços + '/0'
};

typedef struct Aluno Aluno; //define um apelido para a struct

int main() {
    Aluno aluno; //apenas um aluno
    printf("Matricula: ");
    scanf("%s", aluno.matricula); //relembrando, sempre que for ler string, nao precisa usar &.
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