#include <stdio.h>

int main() {
    //vetor de inteiros de 5 posições (índice 0 ao 4) -> ocupa um espaço contíguo na memória.
    int vet[5];

    //Ao inicializar p apontando para o vetor, irá apontar para a primeira posição dele, no caso vet[0].
    int *p = vet;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &vet[i]);
    }
    printf("-----\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", vet[i]);
    }

    printf("Valor de vet[0] = %d\n", *vet); //imprime o valor de índice 0 (vet[0]).
    printf("Valor acessado pelo ponteiro (indiretamente) = %d\n", *p);

    printf("Endereco de vet[0] = %p\n", vet); //imprime o endereço de memória do índice 0 (vet[0]), que é igual a &vet[0];
    printf("Endereco de vet[0] = %p\n", &vet[0]);

    printf("Endereco apontado pelo ponteiro [vet[0]] = %p\n", p); //imprime o mesmo endereço de memória de vet[0], ja que p aponta para vet.

    printf("Valor de vet[0] + 1 = %d\n", ++(*vet)); //incrementa o valor de vet[0] em 1 e depois imprime o novo valor.

    printf("Valor de vet[2] + 5 = %d\n", *(vet + 2) + 5); //acessa vet[2] e depois soma 5.

    return 0;
}