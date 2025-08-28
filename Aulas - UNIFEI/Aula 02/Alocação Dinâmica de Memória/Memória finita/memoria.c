/*
Se a memória do computador já estiver toda ocupada, malloc nao consegue alocar mais espaco e retorna NULL.
Por isso eh importante verificar essa possibilidade logo apos utilizar o malloc.
*/
int *ptr;
ptr = malloc(sizeof(data));
if (ptr == NULL) {
    printf("Erro...\n");
    return -1;
}

/*
A digitacao frequente e repetida desse teste acima eh cansativa. Por isso, usa-se a seguinte funcao-embalagem (=wrapper function) de malloc:
*/

void *mallocc (size_t nbytes) {
    void *ptr;
    ptr = malloc(nbytes);
    if (ptr == NULL) {
        printf("Erro...\n");
        return;
    }
    return ptr;
}

/*
O parametro de mallocc eh do tipo size_t (abreviatura de size data type); em mts computadores, size_t eh o mesmo que unsigned int.
*/

/*
!!!!! Eh de extrema importancia atribuir NULL a cada ponteiro que se torna inutil / desnecessario.
*/