#include <stdio.h>
#include <stdlib.h>

    /*
    Diferença entre malloc e calloc...
    */

    /*
    Quando eu utilizo malloc, ele apenas reserva o bloco de memória com o tamanho em bytes, então se eu for imprimir e tiver
    lixo de memória no espaço alocado, ele irá exibir.
    Já calloc, ao ser utilizado, ele reserva o bloco de memória e inicializa todos os bits desse bloco igual 0.
    */

    enum OpcaoNovoTamanho {
        Sim = 1,
        Nao
    };

    typedef enum OpcaoNovoTamanho OpcaoNovoTamanho;

    enum Vetores {
        PrimeiroVetor = 1,
        SegundoVetor
    };

    typedef enum Vetores Vetores;

int main() {
    int *vet, *vet2, *temp, tam, tam2;
    unsigned short int opc, opc2;

    printf("Tamanho do primeiro vetor: ");
    scanf("%d", &tam);
    printf("Tamanho do segundo vetor: ");
    scanf("%d", &tam2);

    vet = malloc(sizeof(int) * tam);

    if (vet == NULL) {
        printf("Erro\n");
        return -1;
    }

    vet2 = calloc(tam2, sizeof(int));

    if (vet2 == NULL) {
        printf("Erro\n");
        return -1;
    }

    printf("\nElemento(s) do primeiro vetor:\n");
    for (int i = 0; i < tam; i++) {
        printf("vet[%d] = %d\n", i, *(vet + i));
    } printf("\n");

    printf("Elemento(s) do segundo vetor:\n");
    for (int i = 0; i < tam2; i++) {
        printf("vet2[%d] = %d\n", i, *(vet2 + i));
    } printf("\n");

    printf("\nDeseja alterar o tamanho de um dos vetores:\n");
    printf("1 - Sim\n");
    printf("2 - Nao\n");
    printf("Opcao: ");
    scanf("%hu", &opc);

    if(opc == Sim) {
        printf("\nQual vetor:\n");
        printf("1 - Primeiro vetor\n");
        printf("2 - Segundo vetor\n");
        printf("Opcao: ");
        scanf("%hu", &opc2);
        printf("\n");

        if (opc2 == PrimeiroVetor) {
            printf("Novo tamanho: ");
            scanf("%d", &tam);
            
            temp = realloc(vet, sizeof(int) * tam);
            
            if (temp == NULL) {
                return -1;
            }
            
            vet = temp;
            
            for (int i = 0; i < tam; i++) {
                printf("vet[%d] = %d\n", i, *(vet + i));
            }
        } else if (opc2 == SegundoVetor) {
            printf("Novo tamanho: ");
            scanf("%d", &tam2);

            temp = realloc(vet2, sizeof(int) * tam2);

            if (temp == NULL) {
                return -1;
            }

            vet2 = temp;

            for (int i = 0; i < tam2; i++) {
                printf("vet2[%d] = %d\n", i, *(vet2 + i));
            }
        }
    }

    free(vet);
    free(vet2);

    return 0;
}