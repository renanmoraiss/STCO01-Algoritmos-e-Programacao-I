#include <stdio.h>

//typedef -> apelidos / redefinir tipos
int main() {
    typedef float nota;
    nota n1;
    nota n2;
    nota mf;
    printf("Sua nota na N1: ");
    scanf("%f", &n1);
    printf("Sua nota na N2: ");
    scanf("%f", &n2);
    mf = (n1 + n2) / 2.0;
    printf("Media final: %0.2f\n", mf);
    return 0;
}