#include <stdio.h>

void f1(void); // Prototipo de función.
int K = 5; // Variable global.

int main(void) {
    int I;
    for (I = 1; I <= 3; I++) {
        f1();
    }
    return 0;
}

void f1(void) {
    int K = 2; // Variable local.
    K += K;
    printf("\n\nEl valor de la variable local es: %d", K);
    K = K + ::K; // Uso de la variable global.
    printf("\nEl valor de la variable global es: %d", K);
}
