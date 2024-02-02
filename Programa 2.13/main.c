#include <stdio.h>
#include <math.h>

/* Y: variable de tipo entero. X: variable de tipo real. */
int main(void)
{
    float X;
    int Y;

    printf("Ingrese el valor de Y: ");
    scanf("%d", &Y);

    if (Y < 0 || Y > 50)
    {
        X = 0;
    }
    else if (Y <= 10)
    {
        X = 4.0 / Y - Y;  // Se utilizó 4.0 para forzar la operación como float
    }
    else if (Y <= 25)
    {
        X = pow(Y, 3) - 12;
    }
    else
    {
        X = pow(Y, 2) + pow(Y, 3) - 18;
    }

    printf("\nY = %d\tX = %8.2f", Y, X);

    return 0;
}
