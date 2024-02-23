#include <stdio.h>

/* Prototipo de función */
void f1(int *);

/* Función principal */
int main(void) {
    int I, K = 4;
    for (I = 1; I <= 3; I++) {
        printf("\n\nValor de K antes de llamar a la función: %d", ++K);
        f1(&K); // Llamada a la función f1. Se pasa la dirección de la variable K.
        printf("\nValor de K después de llamar a la función: %d", K);
    }
    return 0; // Indicador de salida exitosa del programa
}

/* Función f1 */
void f1(int *R) {
    /* La función f1 recibe un parámetro por referencia. Cada vez que el
       parámetro se utiliza en la función debe ir precedido por el operador de
       indirección. */
    *R += *R;
}

