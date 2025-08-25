#include <stdio.h>

int main() {
    double rating = 2839.6;
    int num = 25;
    float nota = 7.9;
    char letra = 'r';
    char nome[] = "renan";

    printf("Nome: %s e ocupa %zu bytes (5 caracteres + '/0')\n", nome, sizeof(nome));
    printf("Rating: %0.2lf e double ocupa %zu bytes\n", rating, sizeof(rating));
    printf("Numero: %d e int ocupa %zu bytes\n", num, sizeof(num));
    printf("Nota: %0.2f e float ocupa %zu btyes\n", nota, sizeof(nota));
    printf("Caractere: %c e char ocupa %zu byte\n", letra, sizeof(letra));
    return 0;
}