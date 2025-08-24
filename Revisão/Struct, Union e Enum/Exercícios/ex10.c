#include <stdio.h>

struct Funcionario {
    char nome[30];
    char cargo[30];
    double salario;
};

typedef struct Funcionario Funcionario;

int main() {
    Funcionario funcionarios[10];

    for (int i = 0; i < 10; i++) {
        printf("Nome: ");
        scanf(" %29[^\n]", funcionarios[i].nome);
        printf("Cargo: ");
        scanf(" %29[^\n]", funcionarios[i].cargo);
        printf("Salario: ");
        scanf("%lf", &funcionarios[i].salario);
    }

    double maior_salario = funcionarios[0].salario;
    unsigned short int index = 0;
    for (int i = 0; i < 10; i++) {
        if (funcionarios[i].salario > maior_salario) {
            index = i;
        } else {
            continue;
        }
    }

    printf("\n===== FUNCIONARIO COM O MAIOR SALARIO =====\n");
    printf("Nome: %s\n", funcionarios[index].nome);
    printf("Cargo: %s\n", funcionarios[index].cargo);
    printf("Salario: R$ %0.2lf\n", funcionarios[index].salario);

    return 0;
}