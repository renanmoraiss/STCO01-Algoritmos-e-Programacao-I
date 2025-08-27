/*
ENUNCIADO
2. A seguinte função promete devolver um vetor com os 3 primeiros números primos maiores que 1000. Onde está o erro?
*/
int *primos (void) {
    int v[3];
    v[0] = 1009; 
    v[1] = 1013; 
    v[2] = 1019; 
    return v; 
}

//O GRANDE ERRO DO CÓDIGO ACIMA, EH QUE O VETOR ESTÁ ALOCADO LOCALMENTE, OU SEJA, NA STACK, ENTÃO QUANDO A FUNÇÃO TERMINAR DE EXECUTAR, ESSA MEMÓRIA SERÁ LIBERADA NOVAMENTE E ENTÃO NÃO TERÁ COMO ACESSAR O ENDEREÇO FORA DA FUNÇÃO.
//PARA FAZER ISSO FUNCIONAR, PRECISAMOS QUE A MEMÓRIA ESTEJA NA HEAP, OU SEJA, ALOCAR O VETOR DINAMICAMENTE.

/*
CORREÇÃO
*/

int *primos (void) {
    int *v; //declarando um ponteiro v(ponteiro-para-int).
    v = malloc(3 * sizeof(int)); //v aponta para o endereço do bloco de memória de 12 bytes consecutivos.
    if (v == NULL) {
        return NULL;
    }
    *(v+0) = 1009;
    *(v+1) = 1013;
    *(v+2) = 1019;
    return v;
}