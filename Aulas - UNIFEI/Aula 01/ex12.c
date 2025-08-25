/*
ENUNCIADO
5. Analise o seguinte programa:
...
O programa produz a seguinte resposta:
x: 111;
v[0]: 999;
-> Os valores de x e v[0] não deveriam ser iguais?
*/

/*
RESPOSTA
Não, a função func1 recebe uma passagem por cópia, ou seja, ela cria uma nova variável x dentro da função e o valor que é alterado nessa variável não interfere em nada na variável original da main, pois são variáveis com endereços diferentes, e isso só aconteceria se ocorresse uma passagem via ponteiro. Já o vetor, ele por padrão, tem o ponteiro v que aponta para o endereço do primeiro elemento dele, portanto, se eu mudo o valor desse elemento em outro função, essa alteração também é refletida na main. Uma prova disso é se eu imprimir o valor de v no formato %p, irá imprimir o endereço do primeiro elemento do vetor! Em síntese, v tanto na main quanto na func2 irá apontar para o mesmo bloco de memória, por isso ocorre a mudança.
*/

#include <stdio.h>

void func1(int x);
void func2(int v[]);

int main(void) {
    int x, v[2];
    x = 111;
    func1(x);
    printf("x: %d\n", x); //imprime 111
    v[0] = 111;
    func2(v);
    printf("v[0]: %d\n", v[0]); //imprime 999
    return 0;
}

void func1(int x) {
    x = 9 * x;
    //x = 9 * 111;
    //x = 999; (no entanto, é uma passagem por copia, ou seja, nao altera na main);
}

void func2(int v[]) {
    v[0] = 9 * v[0];
    //v[0] = 9 * 111;
    //v[0] = 999 (isso sim altera na main);
}