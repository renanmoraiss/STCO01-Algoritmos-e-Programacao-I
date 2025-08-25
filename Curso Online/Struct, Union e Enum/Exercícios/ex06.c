#include <stdio.h>
#include <string.h>

struct Data {
    short int dia;
    short int mes;
    short int ano;
};

typedef struct Data Data;

int main() {
    Data data;

    printf("Dia: ");
    scanf("%hd", &data.dia);
    printf("Mes: ");
    scanf("%hd", &data.mes);
    printf("Ano: ");
    scanf("%hd", &data.ano);

    printf("\n%hd/%hd/%hd", data.dia, data.mes, data.ano);

    return 0;
}