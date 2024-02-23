#include <stdio.h>

/* Prototipo de funci�n */
int F1(int, int *);

/* Variables globales */
int A = 3;
int B = 7;
int C = 4;
int D = 2;

/* Funci�n principal */
void main(void) {
    A = F1(C, &D);
    printf("\n%d %d %d %d", A, B, C, D);
    C = 3;
    C = F1(A, &C);
    printf("\n%d %d %d %d", A, B, C, D);
}

/* Definici�n de la funci�n F1 */
int F1(int X, int *Y) {
    int A;
    A = X * (*Y); /* Se necesita utilizar par�ntesis para indicar la multiplicaci�n */
    C++;
    B += *Y;
    printf("\n%d %d %d %d", A, B, C, D);
    (*Y)--; /* Decremento correcto del valor al que apunta Y */
    return C;
}

