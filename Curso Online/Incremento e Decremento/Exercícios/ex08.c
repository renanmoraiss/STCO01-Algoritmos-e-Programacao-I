#include <stdio.h>

int main() {
    for (int i = 2; i <= 20; i+= 2) {
        printf("i = %d\n", i);
    }
    //ou
    for (int i = 2; i <= 20; i++) {
        if (i % 2 == 0) {
            printf("i = %d\n", i);
        }
    }
    return 0;
}