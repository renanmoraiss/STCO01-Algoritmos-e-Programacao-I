#include <stdio.h>

int main() {
    int i;
    i = 1;
    int soma = 0;
    while (i <= 100) {
        printf("i = %d\n", i);
        soma += i;
        i++;
    }
    printf("soma = %d\n", soma);
    return 0;
}