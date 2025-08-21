#include <stdio.h>

int main() {
    int vet[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("%d tem %zu bytes\t", vet[i], sizeof(vet[i]));
    } printf("\n");
    printf("O vetor vet tem %zu bytes\n", sizeof(vet));

    char vet2[6] = {'a', 'b', 'c', 'd', 'e'}; //último elemento num vetor de char é o /0 !!
    for (int i = 0; i < 5; i++) {
        printf("%c tem %zu byte\t", vet2[i], sizeof(vet2[i])); //sizeof retorna o tamanho em bytes
    }
    printf("\n");
    printf("O vetor vet2 tem %zu bites\n", sizeof(vet2));

    printf("vet[0] = %d e o endereco de memoria = %p\n", vet[0], &vet[0]);
    printf("vet[0] = %d e o endereco de memoria = %p\n", *(vet), vet);

    printf("vet[1] = %d e o endereco de memoria = %p\n", *(vet + 1), vet + 1);
    printf("vet[2] = %d e o endereco de memoria = %p\n", *(vet + 2), vet + 2);
    printf("vet[3] = %d e o endereco de memoria = %p\n", *(vet + 3), vet + 3);

    printf("vet[0] = %d e o endereco de memoria = %p\n", *vet, vet);

    printf("char tem %zu btye\n", sizeof(char));
    printf("int tem %zu btyes\n", sizeof(int));
    printf("float tem %zu btyes\n", sizeof(float));
    printf("double tem %zu btyes\n", sizeof(double));

    return 0;
}

/*
Cada tipo de dado, por padrão, possui um determinado número de bytes. (1 byte = 8 bits)
-> char = 1 btye
-> int = 4 btyes
-> float = 4 btyes
-> double = 8 btyes
*/