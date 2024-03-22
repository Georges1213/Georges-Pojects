#include <stdio.h>

const int MAX = 100;

void Lectura(int[], int);
int Busca(int[], int, int);

void main(void)
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tama�o del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1); // Se verifica que el tama�o del arreglo sea correcto.
    Lectura(VEC, TAM);
    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);
    RES = Busca(VEC, TAM, ELE); // Se llama a la funci�n que busca en el arreglo.
    if (RES)
        printf("\nEl elemento se encuentra en la posici�n: %d", RES);
    else
        printf("\nEl elemento no se encuentra en el arreglo");
}

void Lectura(int A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

int Busca(int A[], int T, int E)
{
    int RES, I = 0, BAN = 0;
    while ((I < T) && (E >= A[I]) && !BAN)
    {
        if (A[I] == E)
            BAN++;
        else
            I++;
    }
    if (BAN)
        RES = I + 1; // Se asigna I+1 dado que las posiciones en el arreglo comienzan desde cero.
    else
        RES = BAN;
    return (RES);
}
