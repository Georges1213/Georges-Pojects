#include <stdio.h>

void main(void)
{
    int V1[4] = {1, 3, 5, 7}, V2[4] = {2, 4};
    int *AX, *AY;
    AX = &V1[2]; // AX apunta al tercer elemento de V1
    AY = &V2[2]; // AY apunta al tercer elemento de V2
    V2[2] = *(AX + 1); // El tercer elemento de V2 se asigna al siguiente elemento de AX (que es el cuarto elemento de V1)
    V2[3] = *AX; // El cuarto elemento de V2 se asigna al valor al que apunta AX (el tercer elemento de V1)
    AX = AX + 1; // Se mueve el puntero AX al siguiente elemento
    V1[0] = *AX; // El primer elemento de V1 se asigna al valor al que apunta AX (el cuarto elemento de V1)
    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \tV2[0]=%d V2[1]=%d V2[2]=%d V2[3]=%d", V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);
    V1[2] = *AY; // El tercer elemento de V1 se asigna al valor al que apunta AY (el tercer elemento de V2)
    V1[1] = --*AY; // Se decrementa el valor al que apunta AY y se asigna al segundo elemento de V1
    AX = AX + 1; // Se mueve el puntero AX al siguiente elemento
    V1[3] = *AX; // El cuarto elemento de V1 se asigna al valor al que apunta AX (el cuarto elemento de V1)
    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \tV2[0]=%d V2[1]=%d V2[2]=%d V2[3]=%d", V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);
}
