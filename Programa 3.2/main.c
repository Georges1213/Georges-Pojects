#include <stdio.h>

int main(void)
{
    int I, N, NUM, SUM;
    SUM = 0;
    printf("Ingrese el n�mero de datos:\t");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Error: Debe ingresar un n�mero entero positivo como cantidad de datos.\n");
        return 1; // Return an error code
    }
    for (I = 1; I <= N; I++)
    {
        printf("Ingrese el dato n�mero %d:\t", I);
        if (scanf("%d", &NUM) != 1) {
            printf("Error: Debe ingresar un n�mero entero como dato.\n");
            return 1; // Return an error code
        }
        if (NUM > 0)
            SUM = SUM + NUM;
    }
    printf("\nLa suma de los n�meros positivos es: %d\n", SUM);
    return 0; // Return success
}
