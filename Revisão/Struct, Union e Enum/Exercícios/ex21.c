#include <stdio.h>

enum DiasSemana {
    dom = 1,
    seg,
    ter,
    qua,
    qui,
    sex,
    sab
};

typedef enum DiasSemana DiasSemana;

int main() {

    printf("Domingo = %d\n", dom);
    printf("Segunda-feira = %d\n", seg);
    printf("Terca-feira = %d\n", ter);
    printf("Quarta-feira = %d\n", qua);
    printf("Quinta-feira = %d\n", qui);
    printf("Sexta-feira = %d\n", sex);
    printf("Sabado = %d\n", sab);

    return 0;
}