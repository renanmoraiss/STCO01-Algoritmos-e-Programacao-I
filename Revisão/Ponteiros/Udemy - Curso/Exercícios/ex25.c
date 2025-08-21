/*
Exercício de Fixação: acertar o output.
*/

int main() {
    int vet[3] = {1, 3, 5};
    int * p = vet; //p aponta para vet, ou seja, *p = 1.
    (*p)++; //executa e então incrementa 1 em *p. (*p = 2)
    p++; //agora p aponta para vet[1]... *p = 3.
    (*p)++; //executa e então incrementa 1 em *p. (*p = 4).
    printf("%d %d %d\n", vet[0], vet[1], vet[2]); //2 4 5 
    return 0;
}