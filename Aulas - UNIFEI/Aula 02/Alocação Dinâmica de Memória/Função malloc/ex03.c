/*
ENUNCIADO
3. Discuta o efeito do seguinte fragmento de código:
*/
x = malloc(10 * sizeof *x);

/*
RESPOSTA
Linha 5 -> estamos utilizando o malloc para alocar um espaço de memória contíguo com um determinado tamanho em bytes (mais especificamente na memória RAM (random access memory). Dentro do malloc podemos utilizar 2 parametros, o primeiro eh algum valor que podemos utilizar para multiplicar o tamanho em bytes de alguma variavel ou tipo, e no exemplo acima esse valor eh o 10. O segundo eh o tamanho em bytes da variavel ou tipo nativo que queremos, e para isso utilizamos o sizeof (que nos retorna o tamanho em bytes), e estamos utilizando sizeof *x, ou seja, ele retorna o tamanho do tipo apontado por x, que no exemplo fica implicito, mas se fosse um float, nos retornaria 4, e entao 4 * 10 = 40 bytes de espaco alocado na memoria. Por final, estamos igualando o malloc ao x, ou seja, o x vai apontar para o endereço da memória reservada por malloc.
*/