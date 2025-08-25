/*
ENUNCIADO
2. Suponha que i é uma variável inteira e v um vetor de inteiros. Descreva, em portugues, a sequencia de operacoes que o computador
executa para calcular o valor da expressao &v[i+9]?
*/

/*
RESPOSTA
1. Primeiro deve-se saber o valor de i, por exemplo, para essa descricao, vamos adotar i = 0, entao &v[0 + 9] = &v[9];
2. Pegar o tipo do vetor, que é int, e como sabemos que um tipo int ocupa 4 bytes de memória, podemos calcular pelo total de elementos do vetor para saber o seu tamanho real, então 9 * 4 = 36 bytes.
3. O computador pega o endereco inicial, por exemplo, se &v[0] é 55000, então &v[9] é 55036, ou seja, a cada 4 bytes deslocados para a frente, o computador acessa um novo elemento do vetor.
*/