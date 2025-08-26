#include <stdio.h>
#include <stdlib.h>

void imprimeVetor(int *vet, int tam);

int main() {
    int *vet, *temp, num;

    vet = malloc(sizeof(int)); //comecou alocando 4 bytes na memoria (minimo em um vetor de int).

    if (vet == NULL) {
        return -1;
    }

    int tam = 0;

    printf("Num: ");
    scanf("%d", &num);

    while (num != -1) {
        *(vet + tam) = num; 

        tam++;

        temp = realloc(vet, sizeof(int) * (tam+1)); //a cada condicao aceita, o vetor dinamico se realoca com 4 bytes a mais.
        
        if(temp == NULL) {
            return -1;
        }

        vet = temp;

        printf("Num: ");
        scanf("%d", &num);
    }

    imprimeVetor(vet, tam);

    free(vet);

    return 0;
}

void imprimeVetor(int *vet, int tam) {
    printf("\nElementos do vetor:\n");
    for (int i = 0; i < tam; i++) {
        printf("vet[%d] = %d\n", i, *(vet + i));
    }
}