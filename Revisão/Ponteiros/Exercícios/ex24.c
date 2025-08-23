/*
Exercício de Fixação: acertar o output.
*/

int main() {
    int vet[3] = {2, 4, 6};
    int* p = vet; //p aponta para vet, ou seja, *p = 2.
    int soma = *p + *(p + 1) + *(p + 2); //soma = 2 + 4 + 6... soma = 12.
    printf("%d\n", soma);
    return 0;
}