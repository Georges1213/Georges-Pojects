#include <stdio.h>

int main(void)
{
    int I, N, NUM, SUM;
    SUM = 0;
    printf("Ingrese el número de datos:\t");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Error: Debe ingresar un número entero positivo como cantidad de datos.\n");
        return 1; // Return an error code
    }
    for (I = 1; I <= N; I++)
    {
        printf("Ingrese el dato número %d:\t", I);
        if (scanf("%d", &NUM) != 1) {
            printf("Error: Debe ingresar un número entero como dato.\n");
            return 1; // Return an error code
        }
        if (NUM > 0)
            SUM = SUM + NUM;
    }
    printf("\nLa suma de los números positivos es: %d\n", SUM);
    return 0; // Return success
}
