#include <stdio.h>

int main(void) {
    int *p; //p é um ponteiro para inteiro;
    int **r; //r é um ponteiro para ponteiro para inteiro
    p = &a; //p aponta para a
    r = &p; //r aponta para p e **r é a
    c = **r + b; //c = a + b
    return 0;
}