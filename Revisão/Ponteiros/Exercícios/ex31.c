#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 15.5;
    char caractere = 'r';
    int* ptx;
    //*ptx = &inteiro; -> EXTREMAMENTE ERRADO, NÃO INICIALIZO PONTEIRO COM *, SOMENTE NA DECLARAÇÃO!
    ptx = &inteiro;
    *ptx = 25; //mudo o valor contido no endereço que ptx está apontando, que no caso é o 'inteiro' (10 -> 25).
    float * pty = &real;
    char *ptz = &caractere;
    
    printf("Antes:\n");
    printf("Int: %d\n", *ptx);
    printf("Float: %.2f\n", *pty);
    printf("Char: %c\n", *ptz);

    scanf("%d", ptx);
    scanf("%f", pty);
    scanf(" %c", ptz);

    printf("Depois:\n");
    printf("Int: %d\n", *ptx);
    printf("Float: %.2f\n", *pty);
    printf("Char: %c\n", *ptz);
    return 0;
}