/*
Questão retirada da P2 da disciplina de Fundamentos de Programação (2025.1)
*/

//comentei minha lógica para uma melhor compreensão

#include <stdio.h>

int main() {
    int valores[] = {5, 10, 15, 20};
    int *p = valores; //aponta para valores[0]... = 5.

    p = p + 2; //aponta para valores[2]... = 15.
    *p = *p + 1;//15 + 1 = 16.
    p--; //aponta para valores[1]... = 10.
    *(p + 1) = *(p - 1) + 2; //primeiro aponta para valores[0] (p - 1), depois pega o valor de valores[0] e soma 2... 5 + 2 = 7. E depois aponta para valores[2] (p + 1) e atribui esse valor la.

    printf("%d\n", valores[2]);
    return 0;
}