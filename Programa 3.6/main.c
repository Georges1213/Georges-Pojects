#include <stdio.h>

/* N�mina de profesores.
El programa, al recibir como datos los salarios de los profesores de una
universidad, obtiene la n�mina y el promedio de los salarios.
I: variable de tipo entero.
SAL, NOM y PRO: variables de tipo real. */
int main(void)
{
    int I = 0;
    float SAL, PRO, NOM = 0;

    printf("Ingrese el salario del profesor (0 para terminar):\t");
    scanf("%f", &SAL);

    while (SAL != 0)
    {
        NOM += SAL;
        I++;
        printf("Ingrese el salario del profesor (0 para terminar):\t");
        scanf("%f", &SAL);
    }

    if (I > 0)
    {
        PRO = NOM / I;
        printf("\nN�mina total: %.2f\nPromedio de salarios: %.2f\n", NOM, PRO);
    }
    else
    {
        printf("\nNo se ingresaron salarios v�lidos.\n");
    }

    return 0;
}
