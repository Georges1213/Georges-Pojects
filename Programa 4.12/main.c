#include <stdio.h>

/* Prototipo de funci�n */
int mcd(int, int);

/* Funci�n principal */
void main(void) {
    int NU1, NU2, RES;
    printf("\nIngresa los dos n�meros enteros: ");
    scanf("%d %d", &NU1, &NU2);
    RES = mcd(NU1, NU2);
    printf("\nEl m�ximo com�n divisor de %d y %d es: %d", NU1, NU2, RES);
}

/* Funci�n mcd */
int mcd(int N1, int N2) {
    int I, MCD;
    if (N1 < N2)
        I = N1;
    else
        I = N2;
    /* I se inicializa con el menor de los dos n�meros. */
    for (I; I >= 1; I--) {
        if (N1 % I == 0 && N2 % I == 0) {
            MCD = I;
            break;
        }
    }
    return MCD;
}
