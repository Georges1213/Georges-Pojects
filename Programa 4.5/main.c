#include <stdio.h>

/* Prototipo de función */
int cubo(int);

/* Función principal */
int main(void) {
    int I;
    for (I = 1; I <= 10; I++)
        printf("\nEl cubo de %d es: %d", I, cubo(I)); /* Llamada a la función cubo. El paso del parámetro es por valor. */

    return 0; // Indicador de salida exitosa del programa
}

/* Función cubo */
int cubo(int K) {
    /* La función calcula el cubo del parámetro K */
    return (K * K * K);
}
