#include <stdio.h>

enum EstadoCivil {
    Solteiro = 1,
    Casado,
    Divorciado,
    Viuvo
};

typedef enum EstadoCivil EstadoCivil;

int main() {
    unsigned short int opcao;
    
    printf("Estado civil:\n");
    printf("1 - Solteiro\n");
    printf("2 - Casado\n");
    printf("3 - Divorciado\n");
    printf("4 - Viuvo\n");
    printf("Opcao: ");
    scanf("%hu", &opcao);

    switch(opcao) {
        case Solteiro: printf("Solteiro\n"); break;
        case Casado: printf("Casado\n"); break;
        case Divorciado: printf("Divorciado\n"); break;
        case Viuvo: printf("Viuvo\n"); break;
        default: return -1;
    }

    return 0;
}