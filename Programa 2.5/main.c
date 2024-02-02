#include <stdio.h>
#include <stdlib.h>

/* OP y T: variables de tipo entero. RES: variable de tipo real. */
int main(void)
{
    int OP, T;
    float RES;

    printf("Ingrese la opción del cálculo y el valor entero: ");
    scanf("%d %d", &OP, &T);

    switch (OP)
    {
    case 1:
        RES = (float)T / 5; // Asegurar la división como punto flotante
        break;
    case 2:
        RES = pow(T, T);
        /* La función pow está definida en la biblioteca math.h */
        break;
    case 3:
    case 4:
        RES = 6 * (float)T / 2; // Asegurar la división como punto flotante
        break;
    default:
        RES = 1;
        break;
    }

    printf("\nResultado: %7.2f", RES);

    return 0;
}
