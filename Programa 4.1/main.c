#include <stdio.h>

int cubo(void); // Prototipo de funci�n.

int I; // Variable global.

int main(void) {
    int CUB;
    for (I = 1; I <= 10; I++) {
        CUB = cubo(); // Llamada a la funci�n cubo.
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
    return 0;
}

int cubo(void) { // Declaraci�n de la funci�n.
    return (I * I * I);
}
