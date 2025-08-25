#include <stdio.h>

int main(void) {
    int *p; //p é um ponteiro para inteiro
    int *q; //q é um ponteiro para inteiro
    p = &a; //p aponta para a
    q = &b; //q aponta para b
    c = *p + *q; //c = a + b
    return 0;
}