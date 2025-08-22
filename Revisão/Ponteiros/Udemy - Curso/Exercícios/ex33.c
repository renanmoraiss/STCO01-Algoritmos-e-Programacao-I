#include <stdio.h>

int main() {
    int vet[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("Dobro de %d = %d\t", *(vet + i), *(vet + i) * 2);
    }
    return 0;
}