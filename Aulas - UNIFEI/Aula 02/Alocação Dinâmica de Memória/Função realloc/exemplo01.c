/*
Suponha, por exemplo, que alocamos um vetor de 1000 inteiros e depois dedicimos que precisamos de duas vezes mais espaço.
Veja um caso concreto:
*/

int *v; //declara um ponteiro-para-int.
v = malloc(sizeof(int) * 1000); //aloca um bloco de memória de 4000 bytes consecutivos na RAM e v aponta para o endereco desse bloco (para o inicio do bloco).
for (int i = 0; i < 990; i++) {
    scanf("%d", *(v + i)); //ou &v[i].
}
//opaaa!!! precisamos de mais memória.
v = realloc(v, sizeof(int) * 2000); //realoca o bloco de memória para 8000 bytes consecutivos na RAM.
for (int i = 990; i < 2000; i++) {
    scanf("%d", *(v + i)); //ou &v[i]
}
