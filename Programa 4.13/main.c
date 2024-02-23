#include <stdio.h>

/* Prototipo de funci�n */
void parimp(int, int *, int *);

/* Funci�n principal */
void main(void) {
    int I, N, NUM, PAR = 0, IMP = 0;
    printf("Ingresa el n�mero de datos: ");
    scanf("%d", &N);
    for (I = 1; I <= N; I++) {
        printf("Ingresa el n�mero %d: ", I);
        scanf("%d", &NUM);
        parimp(NUM, &PAR, &IMP);
    }
    printf("\nN�mero de pares: %d", PAR);
    printf("\nN�mero de impares: %d", IMP);
}

/* Funci�n parimp */
void parimp(int NUM, int *P, int *I) {
    /* La funci�n incrementa el par�metro *P o *I, seg�n sea el n�mero par o impar. */
    if (NUM % 2 == 0) {
        /* Si el residuo de la divisi�n es 0, el n�mero es par. */
        (*P)++;
    } else {
        /* Si el residuo de la divisi�n es diferente de 0, el n�mero es impar. */
        (*I)++;
    }
}
