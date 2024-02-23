#include <stdio.h>

/* Prototipos de funciones */
void funcion1(int, int *, int *);
int funcion2(int *, int);

/* Variables globales */
int a, b, c, d;

/* Función principal */
void main(void) {
    a = 1;
    b = 2;
    c = 3;
    d = 4;

    printf("%d %d %d %d\n", a, b, c, d);

    a = funcion2(&a, c);

    printf("%d %d %d %d\n", a, b, c, d);
}

/* Función funcion1 */
void funcion1(int r, int *b, int *c) {
    int d;
    a = *c;
    d = a + 3 + *b;

    if (r) {
        *b = *b + 2;
        *c = *c + 3;
        printf("%d %d %d %d\n", a, *b, *c, d);
    } else {
        *b = *b + 5;
        *c = *c + 4;
        printf("%d %d %d %d\n", a, *b, *c, d);
    }
}

/* Función funcion2 */
int funcion2(int *d, int c) {
    int b;
    a = 1;
    b = 7;
    funcion1(-1, d, &b);

    printf("%d %d %d %d\n", a, b, c, *d);

    c += 3;
    (*d) += 2;

    printf("%d %d %d %d\n", a, b, c, *d);

    return c;
}

