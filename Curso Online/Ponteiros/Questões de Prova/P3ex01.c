/*
Questão retirada da P3 da disciplina de Fundamentos de Programação (2025.1)
*/

//comentei minha lógica para uma melhor compreensão

#include <stdio.h>

int main() {
    int a = 2, b = 4, c = -1;
    int *ptx, *pty, *ptz;
    ptx = &a; //ptx... = 2;
    pty = &b; //pty... = 4;
    ptz = &c; //ptz... = -1;
    printf("%d %d %d %d %d %d \n", a, b, c, *ptx, *pty, *ptz); // 2, 4, -1, 2, 4, -1
    a = (*ptx) * (*pty); //a = 2 * 4... a = 8;
    b = *ptz + 1; //b = 0;
    ++c; //c = 0;
    printf("%d %d %d %d %d %d \n", a, b, c, *ptx, *pty, *ptz); // 8, 0, 0, 8, 0, 0
    return 0;
}