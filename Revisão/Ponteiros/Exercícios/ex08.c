/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

void modifica(int *x, int y);

int main() {
    int a = 4, b = 3;
    modifica(&a, b);
    printf("%d\n", a); 
    return 0;
}

void modifica(int *x, int y) { //x recebe o endereco de a... *x = 4 e y = 3.
    *x = *x + y; //*x = 4 + 3... *x = 7.
    y = *x - y; //y = 7 - 3... y = 4.
    *x = y + 1; //*x = 4 + 1... *x = 5.
}