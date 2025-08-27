/*
Eis como um vetor (=array) com n elementos inteiros pode ser alocado, e depois desalocado, durante a execução de um programa:
*/
int *v;
int n;
printf("Tamanho do vetor: ");
scanf("%d", &n);
v = malloc(sizeof(int) * n);
if (v == NULL) {
    return -1;
}
for (int i = 0; i < n; i++) {
    scanf("%d", *(v + i)); //ou &v[i]
}
free(v);