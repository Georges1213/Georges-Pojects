#include <stdio.h>  // Incluir archivos de encabezado necesarios
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10  // Definir constante para el tama�o del arreglo

int i;               // Declarar variables globales
int change;
int n;
int a[ARRAY_SIZE];
int buf;
time_t seed;

int main(int argc, char* argv[]) {
    seed = 0;                            // Inicializar semilla para la generaci�n de n�meros aleatorios
    srand(time(&seed));                  // Sembrar el generador de n�meros aleatorios

    n = sizeof(a) / sizeof(*a);          // Calcular el tama�o del arreglo

    // Generar n�meros aleatorios y almacenarlos en el arreglo
    for (i = 0; i <= n-1; i++) {
        a[i] = rand() % 1000;
    }

    // Imprimir los elementos del arreglo antes de ordenar
    for (i = 0; i <= n-1; i++) {
        printf("Elemento a[%d]: %d\n", i, a[i]);
    }

    // Algoritmo de ordenamiento Burbuja
    change = 1;                          // Inicializar el indicador de cambio
    while (change == 1) {                // Continuar hasta que no se realicen intercambios en un pase
        change = 0;                      // Reiniciar el indicador de cambio
        for (i = 0; i <= n-2; i++) {     // Recorrer el arreglo
            if (a[i] > a[i+1]) {         // Comparar elementos adyacentes
                buf = a[i];              // Intercambiar elementos si est�n en el orden incorrecto
                a[i] = a[i+1];
                a[i+1] = buf;
                change = 1;              // Establecer el indicador de cambio en 1 para indicar que se realiz� un intercambio
            }
        }
    }

    // Imprimir los elementos del arreglo despu�s de ordenar
    printf("\n-------------------\n");
    for (i = 0; i <= n-1; i++) {
        printf("Elemento a[%d]: %d\n", i, a[i]);
    }

    return 0;  // Devolver 0 para indicar que la ejecuci�n fue exitosa
}

