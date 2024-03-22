#include <stdio.h>

#define SIZE 4

int main(void) {
    int V1[SIZE] = {2, 3, 4, 7};
    int V2[SIZE] = {6, 0, 0, 0}; // Initialize V2 with 0s for clarity
    int *AX, *AY;
    AX = &V1[3];
    AY = &V2[2];
    V1[V2[0] - V1[2]] = *AY;
    *AY = *AX - V1[0];
    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \tV2[0]=%d V2[1]=%d V2[2]=%d V2[3]=%d",
           V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);
    V2[1] = ++*AX;
    V2[3] = (*AY)++;
    *AX += 2;
    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \tV2[0]=%d V2[1]=%d V2[2]=%d V2[3]=%d",
           V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);
    return 0;
}
