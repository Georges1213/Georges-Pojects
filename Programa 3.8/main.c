#include <stdio.h>

/* Factorial.
El programa calcula el factorial de un n�mero entero.
FAC, I, NUM: variables de tipo entero. */
int main(void)
{
    int I, NUM;
    long FAC = 1;

    printf("\nIngrese el n�mero: ");
    scanf("%d", &NUM);

    if (NUM >= 0)
    {
        for (I = 1; I <= NUM; I++)
        {
            FAC *= I;
        }
        printf("\nEl factorial de %d es: %ld\n", NUM, FAC);
    }
    else
    {
        printf("\nError en el dato ingresado.\n");
    }

    return 0;
}

