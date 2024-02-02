#include <stdio.h>
#include <stdlib.h>

/* PRO: variable de tipo real. */
int main(void)
{
    float PRO;

    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &PRO);

    if (PRO >= 6)
        printf("\nAprobado");

    return 0;
}
