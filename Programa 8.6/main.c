#include <stdio.h>
#include <string.h>

typedef struct {
    int clave;
    char nombre[15];
    float precio;
    int existencia;
} producto;

void Lectura(producto *, int);
void Ventas(producto *, int);
void Reabastecimiento(producto *, int);
void Nuevos_Productos(producto *, int *);
void Inventario(producto *, int);

int main(void) {
    producto INV[100];
    int TAM, OPE;

    do {
        printf("Ingrese el número de productos: ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);

    Lectura(INV, TAM);

    printf("\nIngrese operación a realizar.\n");
    printf("\t1 - Ventas\n");
    printf("\t2 - Reabastecimiento\n");
    printf("\t3 - Nuevos Productos\n");
    printf("\t4 - Inventario\n");
    printf("\t0 - Salir: ");

    scanf("%d", &OPE);

    while (OPE) {
        switch (OPE) {
            case 1:
                Ventas(INV, TAM);
                break;
            case 2:
                Reabastecimiento(INV, TAM);
                break;
            case 3:
                Nuevos_Productos(INV, &TAM);
                break;
            case 4:
                Inventario(INV, TAM);
                break;
        }
        printf("\nIngrese operación a realizar.\n");
        printf("\t1 - Ventas\n");
        printf("\t2 - Reabastecimiento\n");
        printf("\t3 - Nuevos Productos\n");
        printf("\t4 - Inventario\n");
        printf("\t0 - Salir: ");
        scanf("%d", &OPE);
    }

    return 0;
}

void Lectura(producto A[], int T) {
    int I;
    for (I = 0; I < T; I++) {
        printf("\nIngrese información del producto %d", I + 1);
        printf("\n\tClave: ");
        scanf("%d", &A[I].clave);
        fflush(stdin);
        printf("\tNombre: ");
        scanf("%s", A[I].nombre);
        printf("\tPrecio: ");
        scanf("%f", &A[I].precio);
        printf("\tExistencia: ");
        scanf("%d", &A[I].existencia);
    }
}

void Ventas(producto A[], int T) {
    // Implementa la lógica para registrar ventas
}

void Reabastecimiento(producto A[], int T) {
    // Implementa la lógica para reabastecer inventario
}

void Nuevos_Productos(producto A[], int *T) {
    // Implementa la lógica para agregar nuevos productos
}

void Inventario(producto A[], int T) {
    int I;
    for (I = 0; I < T; I++) {
        printf("\nClave: %d", A[I].clave);
        printf("\tNombre: %s", A[I].nombre);
        printf("\tPrecio: %.2f", A[I].precio);
        printf("\tExistencia: %d\n", A[I].existencia);
    }
}
