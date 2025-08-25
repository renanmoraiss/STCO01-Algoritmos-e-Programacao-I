#include <stdio.h>

enum Meses {
    jan = 1,
    fev,
    mar,
    abr,
    mai,
    jun,
    jul,
    ago,
    set,
    out,
    nov,
    dez
};

typedef enum Meses Meses;

int main() {
    unsigned short int num;

    printf("Mes:\n");
    printf("1 - Janeiro\n");
    printf("2 - Fevereiro\n");
    printf("3 - Marco\n");
    printf("4 - Abril\n");
    printf("5 - Maio\n");
    printf("6 - Junho\n");
    printf("7 - Julho\n");
    printf("8 - Agosto\n");
    printf("9 - Setembro\n");
    printf("10 - Outubro\n");
    printf("11 - Novembro\n");
    printf("12 - Dezembro\n");
    printf("Opcao: ");
    scanf("%hu", &num);

    switch(num) {
        case jan: printf("Janeiro\n"); break;
        case fev: printf("Fevereiro\n"); break;
        case mar: printf("Marco\n"); break;
        case abr: printf("Abril\n"); break;
        case mai: printf("Maio\n"); break;
        case jun: printf("Junho\n"); break;
        case jul: printf("Julho\n"); break;
        case ago: printf("Agosto\n"); break;
        case set: printf("Setembro\n"); break;
        case out: printf("Outubro\n"); break;
        case nov: printf("Novembro\n"); break;
        case dez: printf("Dezembro\n"); break;
        default: return -1;
    }

    return 0;
}