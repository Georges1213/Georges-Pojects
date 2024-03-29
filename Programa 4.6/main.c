#include <stdio.h>

/* Prototipo de funci�n */
void f1(int *);

/* Funci�n principal */
int main(void) {
    int I, K = 4;
    for (I = 1; I <= 3; I++) {
        printf("\n\nValor de K antes de llamar a la funci�n: %d", ++K);
        f1(&K); // Llamada a la funci�n f1. Se pasa la direcci�n de la variable K.
        printf("\nValor de K despu�s de llamar a la funci�n: %d", K);
    }
    return 0; // Indicador de salida exitosa del programa
}

/* Funci�n f1 */
void f1(int *R) {
    /* La funci�n f1 recibe un par�metro por referencia. Cada vez que el
       par�metro se utiliza en la funci�n debe ir precedido por el operador de
       indirecci�n. */
    *R += *R;
}

