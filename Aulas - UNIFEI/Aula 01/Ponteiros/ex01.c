#include <stdio.h>

int main(void) {
    int i;
    int *p; //p é um ponteiro para inteiro.
    i = 1234;
    p = &i; //p aponta para i, então *p é i.
    printf("*p = %d\n", *p); //imprime o valor de i. -> 1234
    printf("p = %ld\n", (long int)p); //endereco numerico de i.
    printf("p = %p\n", (void *)p); //endereco hdexadecimal de i.
    printf("&p = %p\n", (void *)&p); //endereco do ponteiro p.
    return 0;
}