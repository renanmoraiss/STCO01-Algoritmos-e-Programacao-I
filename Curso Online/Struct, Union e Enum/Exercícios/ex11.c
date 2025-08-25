#include <stdio.h>
#include <string.h>

union Valor {
    int n1;
    float f1;
    double d1;
};

typedef union Valor Valor;

int main() {
    Valor valor;

    valor.n1 = 10;
    printf("%d\n", valor.n1);
    valor.f1 = 15.75;
    printf("%0.2f\n", valor.f1);
    valor.d1 = 50.50;
    printf("%0.2lf\n", valor.d1);

    printf("%d\n", valor.n1);
    printf("%0.2f\n", valor.f1);
    printf("%0.2lf\n", valor.d1);

    return 0;
}