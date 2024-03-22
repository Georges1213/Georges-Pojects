#include <stdio.h>

#define NUM_CANDIDATES 5

int main(void) {
    int ELE[NUM_CANDIDATES] = {0}; // Array to store votes for each candidate
    int I, VOT;

    printf("Ingresa el primer voto (0 - Para terminar): ");
    scanf("%d", &VOT);

    while (VOT) {
        if (VOT > 0 && VOT <= NUM_CANDIDATES) {
            ELE[VOT - 1]++; // Increment vote count for the corresponding candidate
        } else {
            printf("\nEl voto ingresado es incorrecto.\n");
        }

        printf("Ingresa el siguiente voto (0 - Para terminar): ");
        scanf("%d", &VOT);
    }

    printf("\n\nResultados de la Elección\n");

    for (I = 0; I < NUM_CANDIDATES; I++) {
        printf("\nCandidato %d: %d", I + 1, ELE[I]);
    }

    return 0;
}
