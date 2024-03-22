#include <stdio.h>

const int TAM = 100;

void Imprime(int[], int);
void Primo(int, int *);

void main(void)
{
    int P[TAM] = {2}; // Inicializamos con el primer primo
    int FLA, J = 1, PRI = 3; // J inicia en 1 para el primer primo ya almacenado (2)
    while (J < TAM)
    {
        FLA = 1;
        Primo(PRI, &FLA); // Se llama a la función que determina si PRI es primo.
        if (FLA) // Si FLA es 1, entonces PRI es primo.
        {
            P[J] = PRI;
            J++;
        }
        PRI += 2; // Solo comprobamos números impares, ya que los pares no son primos (excepto 2)
    }
    Imprime(P, TAM);
}

void Primo(int A, int *B)
{
    int DI = 3;
    while (*B && (DI * DI <= A))
    {
        if ((A % DI) == 0)
            *B = 0;
        DI += 2; // Solo necesitamos comprobar números impares como divisores
    }
}

void Imprime(int Primos[], int T)
{
    int I;
    for (I = 0; I < T; I++)
        printf("\nPrimos[%d]: %d", I, Primos[I]);
}

