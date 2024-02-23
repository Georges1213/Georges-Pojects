#include <stdio.h>
#include <math.h>

/* Prototipo de función */
int Expresion(int, int, int);

/* Función principal */
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

/* Función Expresion */
int Expresion(int T, int P, int Q) {
    /* Esta función obtiene el resultado de la expresión para los valores de T, P y Q. */
    return 15 * (int)pow(T, 4) + 12 * (int)pow(P, 5) + 9 * (int)pow(Q, 6);
}
