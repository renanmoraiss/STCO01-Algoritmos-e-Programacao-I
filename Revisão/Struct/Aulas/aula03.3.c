#include <stdio.h>

union Numeros {
    int n1, n2, n3, n4, n5;
};

typedef union Numeros Numeros;

int main() {
    Numeros num;
    num.n1 = 1;
    printf("n1: %d\n", num.n1);
    num.n2 = 2;
    printf("n2: %d\n", num.n2);
    num.n3 = 3;
    printf("n3: %d\n", num.n3);
    num.n4 = 4;
    printf("n4: %d\n", num.n4);
    num.n5 = 5;
    printf("n5: %d\n", num.n5);

    printf("n1: %d\n", num.n1);
    printf("n2: %d\n", num.n2);
    printf("n3: %d\n", num.n3);
    printf("n4: %d\n", num.n4);
    printf("n5: %d\n", num.n5); 
    //todos os prints mostram o último valor que foi atribuído a uma variável da union.

    printf("Num ocupa %zu btyes\n", sizeof(num));

    return 0;
}