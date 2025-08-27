/*
ENUNCIADO
3. A seguinte função promete acrescentar uma célula-cabeça a lista encadeada lst e devolver o endereco da nova lista. Onde está o erro?
*/
celula *acrescentaCabeca (celula *lst) { //para ficar mais facil, vamos fingir que celular eh o typedef de um int, então int *acres... e int *lst
    celula cabeca; //int cabeca;
    cabeca.prox = lst;
    return &cabeca;
}

/*
O codigo acima mostra uma funcao que espera o retorno de um endereco, pois a função eh ponteiro, e esse endereco retornado deve ser do mesmo tipo do ponteiro (temos ponteiro-para-celula e return &cabeca, onde cabeca eh do tipo celula) (o que nao esta errado). No entando, a variavel cabeca eh uma variavel local, entao esta na heap, e estamos retornando o endereco dessa variavel local, entao quando tentarmos acessar na main, por exemplo, irá gerar um comportamento indefinido, pois a partir do momento que a funcao parar de executar, a memoria sera liberada para uso novamente. Então, para corrigir, precisamos alocar a variavel cabeca de forma dinamica, pois com a memoria na heap, aí sim será possível acessar o endereco na main.
*/

celula *acrescentaCabeca (celula *lst) {
    celula *cabeca;
    cabeca = malloc(sizeof(celula));
    if (cabeca == NULL) {
        return NULL;
    }
    cabeca.prox = lst;
    return cabeca;
}