#include <stdio.h>
#include <stdlib.h>

void converte(char **c);

int main() {
    char *c; //declarando ponteiro-para-char.
    c = malloc(sizeof(char)); //c recebe o endereço do espaço de memória que foi alocado na memória ram (1 byte).
    if (c == NULL) {
        return -1;
    }
    converte(&c);
    printf("%s", c);
    free(c); //apos utilizar a memoria, é necessario limpar.
    return 0;
}

void converte(char **c) {
    *c = malloc(sizeof(char) * 2);
    if (*c == NULL) {
        return;
    }
    (*c)[0] = 'r';
    (*c)[1] = '\0';
}