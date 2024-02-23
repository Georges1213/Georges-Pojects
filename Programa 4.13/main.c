#include <stdio.h>

/* Prototipo de función */
void parimp(int, int *, int *);

/* Función principal */
void main(void) {
    int I, N, NUM, PAR = 0, IMP = 0;
    printf("Ingresa el número de datos: ");
    scanf("%d", &N);
    for (I = 1; I <= N; I++) {
        printf("Ingresa el número %d: ", I);
        scanf("%d", &NUM);
        parimp(NUM, &PAR, &IMP);
    }
    printf("\nNúmero de pares: %d", PAR);
    printf("\nNúmero de impares: %d", IMP);
}

/* Función parimp */
void parimp(int NUM, int *P, int *I) {
    /* La función incrementa el parámetro *P o *I, según sea el número par o impar. */
    if (NUM % 2 == 0) {
        /* Si el residuo de la división es 0, el número es par. */
        (*P)++;
    } else {
        /* Si el residuo de la división es diferente de 0, el número es impar. */
        (*I)++;
    }
}
