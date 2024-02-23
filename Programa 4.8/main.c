#include <stdio.h>

/* Prototipos de funciones */
void funcion1(int *, int *);
int funcion2(int, int *);

/* Variables globales */
int a, b, c, d;

/* Función principal */
void main(void) {
    int a; /* Nota que a es una variable local. */
    a = 1; /* Se asigna un valor a la variable local a. */
    b = 2; /* Se asignan valores a las variables globales b, c y d. */
    c = 3;
    d = 4;
    printf("\n%d %d %d %d", a, b, c, d);
    funcion1(&b, &c);
    printf("\n%d %d %d %d", a, b, c, d);
    a = funcion2(c, &d);
    printf("\n%d %d %d %d", a, b, c, d);
}

/* Función funcion1 */
void funcion1(int *b, int *c) {
    int d;
    a = 5; /* Observa que se hace referencia a la variable global a. */
    d = 3; /* Nota que se hace referencia a la variable local d. */
    (*b)++;
    (*c) += 2;
    printf("\n%d %d %d %d", a, *b, *c, d);
}

/* Función funcion2 */
int funcion2(int c, int *d) {
    int b;
    a++;
    b = 7;
    c += 3;
    (*d) += 2;
    printf("\n%d %d %d %d", a, b, c, *d);
    return (c);
}
