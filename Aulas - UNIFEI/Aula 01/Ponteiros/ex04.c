#include <stdio.h>

void hm(int mnts, int *h, int *m);

int main() {
    int mnts, h, m;
    mnts = 200;
    hm(mnts, &h, &m);
    printf("Minutos = %d\n", mnts);
    printf("%d horas e %d minutos\n", h, m);
    return 0;
}

void hm(int mnts, int *h, int *m) {
    *h = (mnts / 60);
    *m = mnts - (60 * (*h)); 
}