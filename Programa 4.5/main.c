#include <stdio.h>

/* Prototipo de funci�n */
int cubo(int);

/* Funci�n principal */
int main(void) {
    int I;
    for (I = 1; I <= 10; I++)
        printf("\nEl cubo de %d es: %d", I, cubo(I)); /* Llamada a la funci�n cubo. El paso del par�metro es por valor. */

    return 0; // Indicador de salida exitosa del programa
}

/* Funci�n cubo */
int cubo(int K) {
    /* La funci�n calcula el cubo del par�metro K */
    return (K * K * K);
}
