#include <stdio.h>
#include <string.h>

union Numero {
    int n1;
    float f1;
};

typedef union Numero Numero;

int main() {
    Numero num;

    num.n1 = 10;
    printf("Int: %d; Bytes: %zu\n", num.n1, sizeof(num.n1));

    num.f1 = 15.15;
    printf("Float: %0.2f; Bytes: %zu\n", num.f1, sizeof(num.f1));

    printf("Lixo de memoria: %d\n", num.n1); // lixo de memória, num.n1 foi sobrescrito

    num.n1 = 10;
    printf("Int: %d; Btyes: %zu\n", num.n1, sizeof(num.n1));

    printf("Lixo de memoria: %0.2f\n", num.f1); // lixo de memória, num.f1 foi sobrescrito.

    num.f1 = 15.15;
    printf("Float: %0.2f; Bytes: %zu\n", num.f1, sizeof(num.f1));

    printf("Lixo de memoria: %d\n", num.n1); // lixo de memória, num.n1 foi sobrescrito.

    return 0;
}