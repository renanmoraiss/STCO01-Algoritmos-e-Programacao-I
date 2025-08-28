/*
ENUNCIADO
1. Suponha dado um arquivo de texto que contem uma sequencia de numeros inteiros. O comprimento da sequencia eh desconhecido. Escreva uma funcao que imprima esses numeros em ordem inversa (último, penultimo, etc...). Eh claro que voce tera que ler todos os numeros e armazena-los na memoria.
A dificuldade esta em alocar espaco para uma quantidade de numeros que so sera conhecida quando chegarmos ao fim do arquivo.
*/

/*
RESPOSTA
*/

#include <stdio.h>
#include <stdlib.h>

void leArquivo(int **vet, int* tam);
void imprimeVetor(int *vet, int tam);

int main() {
    int *vet;
    int tam = 0;
    vet = malloc(sizeof(int));
    if (vet == NULL) {
        printf("Erro...\n");
        return -1;
    }
    leArquivo(&vet, &tam);
    if (tam < 0) {
        printf("Erro...\n");
        return -1;
    }
    printf("Total de inteiros: %d\n", tam);
    printf("Tamanho do vetor: %zu bytes\n", sizeof(int) * tam);
    imprimeVetor(vet, tam);
    free(vet);
    return 0;
}

void leArquivo(int **vet, int* tam) {
    FILE *arq;
    int *temp;
    arq = fopen("inteiros.txt", "r");
    if (arq == NULL) {
        printf("Erro...\n");
        return;
    }
    int i = 0;
    while (fscanf(arq, "%d", &(*vet)[i]) == 1) {
        i++;
        temp = realloc(*vet, sizeof(int) * (i+1));
        if (temp == NULL) {
            printf("Erro...\n");
            return;
        }
        *vet = temp;
    }
    fclose(arq);
    *tam = i;
}

void imprimeVetor(int *vet, int tam) {
    printf("Vetor em ordem inversa:\n");
    for (int i = tam-1; i >= 0; i--) {
        printf("vet[%d] = %d\n", i, *(vet + i));
    } printf("\n");
}