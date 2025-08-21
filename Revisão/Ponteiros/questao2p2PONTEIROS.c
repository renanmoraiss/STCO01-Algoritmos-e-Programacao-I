/*
Questão retirada da P2 da disciplina de Fundamentos de Programação (2025.1)
*/

//comentei minha lógica para uma melhor compreensão

#include <stdio.h>

void modifica(int *x, int y);

int main() {
    int a = 4, b = 3;
    modifica(&a, b);
    printf("%d\n", a);
    return 0;
}

void modifica(int *x, int y) { //*x = ... 4, y = 3
    *x = *x + y; //*x += y, ou seja, 4 + 3 = 7, então *x = 7;
    y = *x - y; // 7 - 3 = 4, então y = 4
    *x = y + 1; //4 + 1 = 5, então *x = 5
}