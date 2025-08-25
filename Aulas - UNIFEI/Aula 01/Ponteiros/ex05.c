#include <stdio.h>

void mm(int vet[10], int *min, int *max);

int main() {
    int vet[10];
    int min, max;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }
    mm(vet, &min, &max);
    printf("Valor minimo = %d\n", min);
    printf("Valor maximo = %d\n", max);
    return 0;
}

void mm(int vet[10], int *min, int *max) {
    *min = vet[0];
    *max = vet[0];
    for (int i = 0; i < 10; i++) {
        if (vet[i] > *max) {
            *max = vet[i];
        }
        if (vet[i] < *min) {
            *min = vet[i];
        }
    }
}