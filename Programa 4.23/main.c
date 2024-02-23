#include <stdio.h>

// Funci�n que intercambia los valores de dos variables
void trueque(int *x, int *y) {
    int tem; // Variable temporal para almacenar el valor de x
    tem = *x;
    *x = *y;
    *y = tem;
}

// Funci�n que devuelve el doble de un valor dado
int suma(int x) {
    return (x + x);
}

int main(void) {
    int a = 5, b = 10;

    // Imprimir los valores originales
    printf("Valores originales: a = %d, b = %d\n", a, b);

    // Llamar a la funci�n trueque para intercambiar los valores de a y b
    trueque(&a, &b);

    // Imprimir los valores despu�s del intercambio
    printf("Despu�s de intercambiar: a = %d, b = %d\n", a, b);

    // Llamar a la funci�n suma para obtener el doble de un valor
    printf("El doble de %d es: %d\n", a, suma(a));

    return 0;
}
