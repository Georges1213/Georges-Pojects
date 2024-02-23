#include <stdio.h>

/* Prototipo de función */
int F1(int, int *);

/* Variables globales */
int A = 3;
int B = 7;
int C = 4;
int D = 2;

/* Función principal */
void main(void) {
    A = F1(C, &D);
    printf("\n%d %d %d %d", A, B, C, D);
    C = 3;
    C = F1(A, &C);
    printf("\n%d %d %d %d", A, B, C, D);
}

/* Definición de la función F1 */
int F1(int X, int *Y) {
    int A;
    A = X * (*Y); /* Se necesita utilizar paréntesis para indicar la multiplicación */
    C++;
    B += *Y;
    printf("\n%d %d %d %d", A, B, C, D);
    (*Y)--; /* Decremento correcto del valor al que apunta Y */
    return C;
}

