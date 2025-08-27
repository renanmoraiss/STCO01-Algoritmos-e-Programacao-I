/*
4. Discuta, passo a passo, o efeito do seguinte fragmento de código:
*/
int *p, *q;
p = malloc(sizeof(int));
*p = 123;
q = malloc(sizeof(int));
*q = *p;
q = p;
free(p);
free(q); //!!
q = NULL;

/*
RESPOSTA
-> linha 4: declara dois ponteiros (p e q), os dois sao ponteiros-para-int.
-> linha 5: faz p apontar para o endereço do bloco de memória alocado por malloc (4 bytes consecutivos).
-> linha 6: atribui a *p o valor 6 (*p eh diferente de p), *p eh valor e p eh o endereco.
-> linha 7: faz q apontar para o endereço do bloco de memória alocado por malloc (4 bytes consecutivos).
-> linha 8: atribui a *q o mesmo valor de *p (então agora, tanto *p quanto *q valem 123).
-> linha 9: faz q apontar para o mesmo endereço que p aponta.
-> linha 10: torna disponivel para reciclagem todo o bloco de memória apontado por p.
-> linha 11: IMPRÓPRIO, pois tanto q quanto p apontam para o mesmo endereço, mas já foi utilizado free(p), entao essa alteração se reflete em todos os ponteiros que apontam para este mesmo endereço, ou seja, a partir do momento que foi usado free(p), a memória ja foi liberada.
-> linha 12: ponteiro q agora eh NULL, ou seja, nao aponta para nenhum endereco.

O código não precisava ter a linha 11!
*/