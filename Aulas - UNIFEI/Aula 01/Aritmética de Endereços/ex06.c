/*
ENUNCIADO
6. O seguinte fragmento de código pretende decidir se "abacate" vem lexicograficamente antes ou depois de "uva".
O que está errado?
*/

//código
char *a, *b;
a = "abacate"; //correto
b = "uva"; //correto
if (a < b) { //Isso compara os endereços de memória!!! -> if (strcmp(a, b) < 0)
    printf("%s vem antes de %s\n", a, b);
} else {
    printf("%s vem depois de %s\n", a, b);
}

/*
O que está errado é a forma que as strings estão sendo comparadas. Em C, sempre que for comparar strings, deve-se utilizar a função strcmp() da biblioteca string.h, se ela retornar 0 é porque as strings são iguais se retornar < 0 é pq a vem antes de b.
*/