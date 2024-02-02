#include <stdio.h>
#include <stdlib.h>

/* NUM: variable de tipo entero. */
int main(void)
{
    int NUM;

    printf("Ingrese el número: ");
    scanf("%d", &NUM);

    if (NUM == 0)
    {
        printf("\nNulo");
    }
    else if (NUM % 2 == 0)
    {
        printf("\nPar");
    }
    else
    {
        printf("\nImpar");
    }

    return 0;
}
