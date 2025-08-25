#include <stdio.h>

struct Vetor {
    float x;
    float y;
    float z;
};

typedef struct Vetor Vetor;

int main() {
    Vetor vet[3];

    for (int i = 0; i < 2; i++) {
        scanf("%f %f %f", &vet[i].x, &vet[i].y, &vet[i].z);
    }

    for (int i = 0; i < 2; i++) {
        vet[2].x += vet[i].x;
        vet[2].y += vet[i].y;
        vet[2].z += vet[i].z;
    }

    printf("Soma da posicao 'x' = %0.2f\n", vet[2].x);
    printf("Soma da posicao 'y' = %0.2f\n", vet[2].y);
    printf("Soma da posicao 'z' = %0.2f\n", vet[2].z);

    return 0;
}