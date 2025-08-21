#include <stdio.h>

int main() {
    int n;
    int fatorial = 1;
    scanf("%d", &n);
    if (n == 0) {
        fatorial = 1;
    } else {
        for (int i = n; i > 1; i--) {
            fatorial = fatorial * i;
        }
    }
    printf("Fatorial de %d = %d\n", n, fatorial);
    return 0;
}