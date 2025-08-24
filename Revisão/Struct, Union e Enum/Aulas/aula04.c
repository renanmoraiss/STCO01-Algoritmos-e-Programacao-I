#include <stdio.h>

//enum -> enumeração

enum dias_da_semana {
    seg, // 0
    ter, // 1
    qua, // 2
    qui, // 3
    sex, // 4
    sab, // 5
    dom // 6
};

typedef enum dias_da_semana dias_da_semana;

int main() {
    dias_da_semana dia1, dia2;

    dia1 = qui;
    dia2 = 3; 
    // quando eu coloco um valor, ele corresponde ao valor numérico do enum.
    // no caso, 'qui' tem valor 3, então dia2 = 3 equivale a dia2 = qui.

    if (dia1 == dia2) {
        printf("Os dias sao iguais\n");
    } else {
        printf("Os dias sao diferentes\n");
    }

    return 0;
}