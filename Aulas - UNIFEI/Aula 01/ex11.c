/*
ENUNCIADO
4. O que faz a seguinte função?
     void imprime (char *v, int n) {
          char *c;
          for (c = v; c < v + n; c++) {
               printf("%c", *c);
          }
     }
*/

/*
RESPOSTA
1. A função recebe dois parametros: um ponteiro v para char, que aponta para o endereco do primeiro elemento do vetor de chars,
e um inteiro n.
2. É declarado um ponteiro c para char.
3. No for, c é inicializado sendo igual a v, ou seja, aponta para o mesmo endereco, e enquanto c apontar para um endereco antes de v + n, é imprimido o valor contido nessa posicao do vetor, e posteriomente c aponta para o elemento posterior.
*/