#include <stdio.h>
#include <string.h>

struct Carro {
    char marca[30];
    char modelo[30];
    short int ano;
};

typedef struct Carro Carro;

int main() {
    Carro carros[5];

    for (int i = 0; i < 5; i++) {
        printf("Marca: ");
        scanf(" %29[^\n]", carros[i].marca);

        printf("Modelo: ");
        scanf(" %29[^\n]", carros[i].modelo);

        printf("Ano: ");
        scanf("%hd", &carros[i].ano);
    }

    for (int i = 0; i < 5; i++) {
        if (carros[i].ano > 2015) {
            printf("\n===== DADOS DO CARRO =====\n");
            printf("Marca: %s\n", carros[i].marca);
            printf("Modelo: %s\n", carros[i].modelo);
            printf("Ano: %hd\n", carros[i].ano);
        } else {
            continue;
        }
    }

    return 0;
}