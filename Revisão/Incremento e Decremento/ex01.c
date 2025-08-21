#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("Antes de Incrementar: %d\n", n);
    printf("Depois de Incrementar: %d\n", ++n); //primeiro incrementa 1, e então utiliza o novo valor na expressão.
    return 0;
}