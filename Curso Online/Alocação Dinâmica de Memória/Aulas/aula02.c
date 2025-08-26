#include <stdio.h>
#include <stdlib.h>

    /*
    Como alocar vetor de forma dinamica...

    3. realloc:
            usada para redimensionar um bloco de memória alocado dinamicamente por malloc ou calloc.
            recebe dois argumentos: um ponteiro previamente alocado e a nova quantidade de bytes desejada.
            retorna um ponteiro para o bloco de memória (que pode ou não ter o mesmo endereço).
            preserva os dados do bloco original até o mínimo entre o tamanho antigo e o novo.
            se o ponteiro for NULL, realloc age como malloc.
            se falhar, retorna NULL e a memória original continua válida.

    4. free:
            usada para liberar a memória alocada por malloc, calloc ou realloc, após seu uso.
    */

int main() {
    // int vet[10]; -> alocação estática

    int tam, *vet, *temp;
    printf("Tamanho do vetor: ");
    scanf("%d", &tam);

    vet = malloc(sizeof(int) * tam);
    //ou 
    //vet = calloc(tam, sizeof(int));

    if (vet == NULL) {
        printf("Erro\n");
        return -1;
    }

    printf("Memoria alocada com sucesso\n");

    for (int i = 0; i < tam; i++) {
        scanf("%d", vet + i); //ou &vet[i]
    }

    for (int i = 0; i < tam; i++) {
        printf("Valor de vet[%d] = %d\n", i, *(vet + i)); //ou vet[i]
    }
    printf("\n");

    printf("Novo tamanho do vetor: ");
    scanf("%d", &tam);

    temp = realloc(vet, sizeof(int) * tam);

    if (temp == NULL) {
        printf("Erro\n");
        return -1;
    }

    vet = temp;

    printf("Vetor realocado\n");
    for (int i = 0; i < tam; i++) {
        printf("Valor de vet[%d] = %d\n", i, *(vet + i));
    }

    free(vet); //libera a memória alocada por malloc, calloc ou realloc

    //O computador só libera a memória alocada dinamicamente dps que o programa parar de rodar!

    return 0;
}