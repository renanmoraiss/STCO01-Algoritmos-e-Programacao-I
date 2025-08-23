#include <stdio.h>
#include <string.h>

struct Aluno {
    char matricula[5];
    char nome[30]; 
    char curso[30]; 
    char data_nascimento[11]; 
}; 

typedef struct Aluno Aluno;

int main() {
    Aluno aluno[5]; //tenho um vetor que pode passar até 5 vzs na struct, ou seja, armazenar os dados de até 5 alunos.
    for (int i = 0; i < 5; i++){ //LAÇO PARA LER OS DADOS DOS 5 ALUNOS
        printf("Matricula: ");
        scanf("%s", aluno[i].matricula);
        printf("Nome: ");
        scanf(" %29[^\n]", aluno[i].nome);
        printf("Curso: ");
        scanf(" %29[^\n]", aluno[i].curso);
        printf("Data de nascimento (mm/dd/yyyy): ");
        scanf(" %10[^\n]", aluno[i].data_nascimento);
    }
    for (int i = 0; i < 5; i++) { //LAÇO PARA IMPRIMIR OS DADOS DOS 5 ALUNOS
        printf("===== DADOS DO ALUNO %d =====\n", i+1);
        printf("Matricula: %s\n", aluno[i].matricula);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Curso: %s\n", aluno[i].curso);
        printf("Data de nascimento: %s\n", aluno[i].data_nascimento);
    }
    return 0;
}