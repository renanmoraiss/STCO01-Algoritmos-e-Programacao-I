#include <stdio.h>

int main(void) {
    int i = 1234;
    printf("i = %d\n", i);
    printf("&i = %ld\n", (long int)&i);
    printf("&i = %p\n", (void *)&i); 
    //ao imprimir endereços usando o formato %p (notação hexadecimal), é necessário realizar o cast com (void *).
    return 0;
}