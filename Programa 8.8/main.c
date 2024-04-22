#include <stdio.h>
#include <string.h>

typedef struct {
    char cal[20];
    int num;
    char col[20];
    char cp[6]; // Se aumenta en 1 para incluir el carácter nulo al final
    char ciu[20];
} domicilio;

typedef struct {
    char nom[20];
    int edad;
    char sexo;
    int con;
    domicilio dom;
    char tel[11]; // Se aumenta en 1 para incluir el carácter nulo al final
} paciente;

void Lectura(paciente *, int);
void F1(paciente *, int);
void F2(paciente *, int);
void F3(paciente *, int);

int main(void) {
    paciente HOSPITAL[100];
    int TAM;

    do {
        printf("Ingrese el número de pacientes: ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);

    Lectura(HOSPITAL, TAM);
    F1(HOSPITAL, TAM);
    F2(HOSPITAL, TAM);
    F3(HOSPITAL, TAM);

    return 0;
}

void Lectura(paciente A[], int T) {
    int I;
    for (I = 0; I < T; I++) {
        printf("\n\t\tPaciente %d\n", I + 1);
        printf("Nombre: ");
        scanf("%19s", A[I].nom);
        printf("Edad: ");
        scanf("%d", &A[I].edad);
        printf("Sexo (F-M): ");
        scanf(" %c", &A[I].sexo); // Se agrega un espacio antes de %c para ignorar los caracteres en blanco
        printf("Condición (1..5): ");
        scanf("%d", &A[I].con);
        printf("\tCalle: ");
        scanf("%19s", A[I].dom.cal);
        printf("\tNúmero: ");
        scanf("%d", &A[I].dom.num);
        printf("\tColonia: ");
        scanf("%19s", A[I].dom.col);
        printf("\tCódigo Postal: ");
        scanf("%5s", A[I].dom.cp); // Se lee hasta 5 caracteres para evitar desbordamientos
        printf("\tCiudad: ");
        scanf("%19s", A[I].dom.ciu);
        printf("Teléfono: ");
        scanf("%10s", A[I].tel);
    }
}

void F1(paciente A[], int T) {
    int I, FEM = 0, MAS = 0, TOT;
    for (I = 0; I < T; I++) {
        switch (A[I].sexo) {
            case 'F':
                FEM++;
                break;
            case 'M':
                MAS++;
                break;
        }
    }
    TOT = FEM + MAS;
    printf("\nPorcentaje de Hombres: %.2f%%", (float)MAS / TOT * 100);
    printf("\nPorcentaje de Mujeres: %.2f%%", (float)FEM / TOT * 100);
}

void F2(paciente A[], int T) {
    int I, C[5] = {0};
    for (I = 0; I < T; I++) {
        C[A[I].con - 1]++;
    }
    for (I = 0; I < 5; I++) {
        printf("\nNúmero pacientes en condición %d: %d", I + 1, C[I]);
    }
}

void F3(paciente A[], int T) {
    int I;
    printf("\nPacientes ingresados en estado de gravedad:");
    for (I = 0; I < T; I++) {
        if (A[I].con == 5) {
            printf("\nNombre: %s\tTeléfono: %s", A[I].nom, A[I].tel);
        }
    }
}
