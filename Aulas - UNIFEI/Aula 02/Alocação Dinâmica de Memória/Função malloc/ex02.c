/*
ENUNCIADO
2. Discuta, passo a passao, o efeito do seguinte fragmento de código:
*/
int *v;
v = malloc(sizeof(int) * 10); 

/*
RESPOSTA
Linha 5 -> aqui estamos declarando v como um ponteiro-para-int, ou seja, v só pode apontar para endereços de variáveis de mesmo tipo, ou seja, que também seja int. V ainda não foi inicializado, então não está apontando para nenhum endereço.
Linha 6 -> aqui, estamos usando a função malloc para poder resever um espaço de memória de bytes consecutivos na memória RAM, que neste caso, é um espaço de 40 bytes, tendo em vista que estamos multiplicando o tamanho de um int em bytes (4) por 10. Ao retornar esse endereço do espaço alocado, estamos igualando a v(ponteiro-para-int) e v vai apontar para este endereço. Não é necessário realizar nenhum conversão, pois é automático, e o endereço vem no tipo void*.
*/