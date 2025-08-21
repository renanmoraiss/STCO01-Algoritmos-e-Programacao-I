#include <stdio.h>

int main() {
    int n; //variável comum, ou seja, guarda um valor do tipo INT
    int* p; //ponteiro para inteiro, ou seja, APONTA para o endereço de memória de uma variável INT

    printf("Informe um numero: ");
    scanf("%d", &n);

    p = &n; //p recebe o endereço de memória de n, ou seja, APONTA para n
            //Ao desreferenciar (*p), acessa o valor contido em n indiretamente
    
    //Imprimem o mesmo valor
    printf("ANTES DE TUDO:\n");
    printf("n: %d\n", n);
    printf("p: %d\n", *p);

    //Imprimem o mesmo endereço de memória
    printf("Endereco de memoria de n: %p\n", &n);
    printf("Endereco de memoria de p: %p\n", p);
    printf("\n");

    return 0;
}