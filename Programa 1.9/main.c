#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

/* ECA: variable de tipo real. */
int main(void)
{
    float ECA;

    printf("Ingrese la extensi�n de la estancia: ");
    scanf("%f", &ECA);

    ECA = ECA * 4047 / 10000;

    printf("\nExtensi�n de la estancia en hect�reas: %5.2f", ECA);

    return 0;
}
