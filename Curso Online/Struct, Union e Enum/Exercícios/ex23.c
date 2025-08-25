#include <stdio.h>

enum NivelAcesso {
    Basico = 1,
    Intermediario,
    Avancado
};

typedef enum NivelAcesso NivelAcesso;

int main() {
    unsigned short int opcao;
    
    printf("Nivel de acesso:\n");
    printf("1 - Basico\n");
    printf("2 - Intermediario\n");
    printf("3 - Avancado\n");
    printf("Opcao: ");
    scanf("%hu", &opcao);

    switch(opcao) {
        case Basico: printf("Nivel de Acesso Basico\n"); break;
        case Intermediario: printf("Nivel de Acesso Intermediario\n"); break;
        case Avancado: printf("Nivel de Acesso Avancado\n"); break;
        default: return -1;
    }
    return 0;
}