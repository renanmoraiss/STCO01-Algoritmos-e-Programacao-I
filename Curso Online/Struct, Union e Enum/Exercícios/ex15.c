#include <stdio.h>
#include <string.h>

union Cor {
    char nome_da_cor[15];
    unsigned short int rgb[3]; 
};

typedef union Cor Cor;

int main() {
    Cor cor;

    strcpy(cor.nome_da_cor, "Azul");
    printf("Nome da cor: %s\n", cor.nome_da_cor);

    cor.rgb[0] = 255;
    printf("R: %hu\n", cor.rgb[0]);

    cor.rgb[1] = 255;
    printf("G: %hu\n", cor.rgb[1]);

    cor.rgb[2] = 255;
    printf("B: %hu\n", cor.rgb[2]);

    printf("Nome da cor: %s\n", cor.nome_da_cor); // lixo de memoria

    printf("R: %hu\n", cor.rgb[0]);
    printf("G: %hu\n", cor.rgb[1]);
    printf("B: %hu\n", cor.rgb[2]);

    strcpy(cor.nome_da_cor, "Vermelho");
    printf("Nome da cor: %s\n", cor.nome_da_cor);

    printf("R: %hu\n", cor.rgb[0]); // lixo de memoria
    printf("G: %hu\n", cor.rgb[1]); // lixo de memoria
    printf("B: %hu\n", cor.rgb[2]); // lixo de memoria

    return 0;
}