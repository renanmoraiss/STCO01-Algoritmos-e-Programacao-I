#include <stdio.h>

enum Calculadora {
    Adicao = 1,
    Subtracao,
    Multiplicacao,
    Divisao,
    Potencia
};

typedef enum Calculadora Calculadora;

int main() {
    unsigned short int opcao;
    double n1, n2;

    printf("Primeiro valor: ");
    scanf("%lf", &n1);
    printf("Segundo valor: ");
    scanf("%lf", &n2);

    printf("Operacao:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Potencia\n");
    printf("Opcao: ");
    scanf("%hu", &opcao);

    switch(opcao) {
        case Adicao:
        printf("%0.2lf + %0.2lf = %0.2lf\n", n1, n2, (n1 + n2));
        break;

        case Subtracao:
        printf("%0.2lf - %0.2lf = %0.2lf\n", n1, n2, (n1 - n2));
        break;

        case Multiplicacao:
        printf("%0.2lf x %0.2lf = %0.2lf\n", n1, n2, (n1 * n2));
        break;

        case Divisao:
        printf("%0.2lf / %0.2lf = %0.2lf\n", n1, n2, (n1 / n2));
        break;

        default:
        return -1;
    }

    return 0;
}