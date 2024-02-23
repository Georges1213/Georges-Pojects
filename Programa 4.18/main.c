#include <stdio.h>
#include <math.h>

/* Prototipo de funci�n */
int Expresion(int, int, int);

/* Funci�n principal */
void main(void) {
    int EXP, T, P, Q;

    for (T = 0; T <= 10; T++) {
        for (P = 0; P <= 10; P++) {
            for (Q = 0; Q <= 10; Q++) {
                EXP = Expresion(T, P, Q);
                if (EXP < 5500) {
                    printf("\nT: %d, P: %d, Q: %d, Resultado: %d", T, P, Q, EXP);
                }
            }
        }
    }
}

/* Funci�n Expresion */
int Expresion(int T, int P, int Q) {
    /* Esta funci�n obtiene el resultado de la expresi�n para los valores de T, P y Q. */
    return 15 * (int)pow(T, 4) + 12 * (int)pow(P, 5) + 9 * (int)pow(Q, 6);
}
