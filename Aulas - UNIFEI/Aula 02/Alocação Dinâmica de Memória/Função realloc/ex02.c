/*
ENUNCIADO
2. Suponha dado um arquivo de texto que contem uma sequencia de numeros inteiros. O comprimento da sequencia eh desconhecido. Escreva uma funcao que
armazene esses numeros em um vetor cujo tamanho seja o minimo necessario. (Leia o arquivo so uma vez!)
*/

/*
RESPOSTA
-> Inicialmente, pensei em usar um while, e enquanto ler um numero inteiro, ele aumenta o tamanho do vetor dinamico com realloc.
*/

/*
ENUNCIADO
2. Suponha dado um arquivo de texto que contem uma sequencia de numeros inteiros. O comprimento da sequencia eh desconhecido. Escreva uma funcao que
armazene esses numeros em um vetor cujo tamanho seja o minimo necessario. (Leia o arquivo so uma vez!)
*/

/*
RESPOSTA
-> Inicialmente, pensei em usar um while, e enquanto ler um numero inteiro, ele aumenta o tamanho do vetor dinamico com realloc.
*/

#include <stdio.h>
#include <stdlib.h>

void leArquivo(int **vet, int *tam);
void imprimeVetor(int *vet, int tam);

int main() {
    int *vet; //declaracao de ponteiro-para-int.
    int tam;
    vet = malloc(sizeof(int)); //vet aponta para o endereço do bloco de memória de 4 bytes alocado e retornado por malloc.
    if (vet == NULL) {
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

void leArquivo(int **vet, int *tam) {
    FILE *arq;
    int *temp;
    arq = fopen("inteiros.txt", "r");
    if (arq == NULL) {
        printf("Erro...\n");
        return;
    }
    int i = 0;
    while(fscanf(arq, "%d", &(*vet)[i]) == 1) {
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
    for (int i = 0; i < tam; i++) {
        printf("%d\t", *(vet + i));
    }
}