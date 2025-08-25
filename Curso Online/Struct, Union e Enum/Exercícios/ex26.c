#include <stdio.h>

enum Booleano {
    Falso, // 0
    Verdadeiro // 1
};

typedef enum Booleano Booleano;

int main() {
    unsigned short int num;

    printf("Voce escolhe 0 ou 1: ");
    scanf("%hu", &num);

    if (num == Falso) printf("Falso\n");
    else if (num == Verdadeiro) printf("Verdadeiro\n");

    return 0;
}