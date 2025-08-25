#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int* ptx = &n1;
    int *pty = &n2;
    printf("Endereco de n1: %p\n", (void*) ptx); //importante fazer o cast sempre que for printar com '%p'.
    printf("Endereco de n2: %p\n", (void*) pty);
    if (ptx > pty) { //compara, respectivamente, os endereços de n1 e n2.
        printf("Logo, n1 tem maior endereco\n");
        printf("Endereco: %p\n", (void*) ptx);
        printf("Valor: %d\n", *ptx);
    }
    else {
        printf("Logo, n2 tem maior endereco\n");
        printf("Endereco: %p\n", (void*) pty);
        printf("Valor: %d", *pty);
    }
    return 0;
}