/*
ENUNCIADO
1. O que há de errado com o seguinte fragmento de código?
*/
int *v;
v = malloc(100 * sizeof(int));
v[0] = 999;
free (v+1);

/*
RESPOSTA:
-> No exemplo acima, o ponteiro v(ponteiro-para-int) aponta para o endereço de um espaço de memória de 400 bytes na RAM, mais especificamente, ele está apontando para v[0]. Logo após, utiliza-se v[0] = 999, atribui o valor 999 ao primeiro mini bloco de um int em um espaço de 400 bytes (100 int) (até aqui tudo certo). No final, o programador utiliza free (v+1), o que vai gerar um corportamento indefinido. Arrumando, ficaria assim: free(v), que é exatamente o ponteiro que esta apontando para o endereco retornado por malloc.
*/