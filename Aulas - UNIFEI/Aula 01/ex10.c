/*
ENUNCIADO
3. Suponha que v é um vetor. Descreva a diferença conceitual entre as expressões:
v[3] e v + 3.
*/

/*
RESPOSTA
A diferença conceitual é que v[3] pega o valor do quarto elemento do vetor, enquanto v + 3 pega o endereço do quarto elemento do vetor. Estaria correto se fosse v[3] == *(v + 3), na qual acessam o valor do quarto elemento, ou v + 3 == &v[3], pegando o endereço do quarto elemento.
*/