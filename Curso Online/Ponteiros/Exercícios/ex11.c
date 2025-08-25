/*
Exercício de Fixação: acertar o output.
*/

#include <stdio.h>

int main() {
    int a = 2, b = 4, c = -1;
    int *ptx = &a, *pty = &b, *ptz = &c; //*ptx = 2, *pty = 4, *pty = -1.
    a = (*ptx) * (*pty); //a = 2 * 4... a = 8.
    b = *ptz + 1; //b = -1 + 1... b = 0.
    ++c; //incrementa e depois executa a expressão, ou seja, c = -1 + 1... c = 0.
    printf("%d %d %d\n", a, b, c);
    return 0;
}