#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("Antes de Decrementar: %d\n", n); 
    printf("Depois de Decrementar: %d\n", --n); //primeiro decrementa 1, e então utiliza o novo valor na expressão.
    return 0;
}