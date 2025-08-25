#include <stdio.h>

int main(void) {
    struct Data { //struct Data ocupa 12 bytes(4 de cada int).
        int dia, mes, ano;
    };
    typedef struct Data data;
    printf("sizeof (data) = %d\n", sizeof(data));
    return 0;
}