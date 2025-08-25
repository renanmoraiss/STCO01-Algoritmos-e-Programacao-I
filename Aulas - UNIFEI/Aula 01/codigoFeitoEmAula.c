#include <stdio.h>

void soma_e_sub(int p, int q, int *soma, int *sub);
int soma(int *V, int n);

int main() {
    int x = 5;
    int y = 7;
    int z;
    int w;

    soma_e_sub(x, y, &z, &w);

    printf("O valor de z (soma) = %d\n", z);
    printf("O valor de w (subtracao) = %d\n", w);

    int X[4];

    int *P = X;
    *P = 10;

    printf("X[0] = %d\n", X[0]);

    X[1] = 20;
    X[2] = 35;
    X[3] = -5;

    printf("Soma do vetor X = %d\n", soma(X, 4));

    int *px = &x;
    printf("px = %p\n", (void *)px);
    printf("x = %p\n", (void *)&x);
    printf("valor de *px = %d\n", *px);

    *px = 10;
    printf("x = %d\n", x);

    x = w;
    w = 15;
    printf("x = %d\n", x);

    int *pa;
    pa = px;
    *pa = 9;

    printf("*pa = %d\n", *pa);

}

void soma_e_sub(int p, int q, int *soma, int *sub) {
    *soma = p + q;
    *sub = p - q;
}

int soma(int *V, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += V[i];
    }
    return soma;
}