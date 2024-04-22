#include <stdio.h>
#include <string.h>

union datos {
    char celular[15];
    char correo[20];
};

typedef struct {
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    union datos personales;
} alumno;

void Lectura(alumno *a);

int main(void) {
    alumno a1 = {120, "María", "Contabilidad", 8.9, {"5-158-40-50"}};
    alumno a2, a3, a0;

    printf("Alumno 2\n");
    printf("Ingrese la matrícula: ");
    scanf("%d", &a2.matricula);
    fflush(stdin);
    printf("Ingrese el nombre: ");
    fgets(a2.nombre, 20, stdin);
    strtok(a2.nombre, "\n");
    fflush(stdin);
    printf("Ingrese la carrera: ");
    fgets(a2.carrera, 20, stdin);
    strtok(a2.carrera, "\n");
    printf("Ingrese el promedio: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);
    printf("Ingrese el correo electrónico: ");
    fgets(a2.personales.correo, 20, stdin);
    strtok(a2.personales.correo, "\n");

    printf("Alumno 3\n");
    Lectura(&a3);

    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.personales.celular);
    puts(a1.personales.correo);

    strcpy(a0.personales.correo, "hgimenez@hotmail.com");
    puts(a0.personales.celular);
    puts(a0.personales.correo);

    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.personales.celular);
    puts(a2.personales.correo);
    printf("Ingrese el teléfono celular del alumno 2: ");
    fflush(stdin);
    fgets(a2.personales.celular, 15, stdin);
    strtok(a2.personales.celular, "\n");

    puts(a2.personales.celular);
    puts(a2.personales.correo);

    printf("\nDatos del alumno 3\n");
    printf("%d\n", a3.matricula);
    puts(a3.nombre);
    puts(a3.carrera);
    printf("%.2f\n", a3.promedio);
    puts(a3.personales.celular);
    puts(a3.personales.correo);

    return 0;
}

void Lectura(alumno *a) {
    printf("\nIngrese la matrícula: ");
    scanf("%d", &a->matricula);
    fflush(stdin);
    printf("Ingrese el nombre: ");
    fgets(a->nombre, 20, stdin);
    strtok(a->nombre, "\n");
    fflush(stdin);
    printf("Ingrese la carrera: ");
    fgets(a->carrera, 20, stdin);
    strtok(a->carrera, "\n");
    printf("Ingrese el promedio: ");
    scanf("%f", &a->promedio);
    fflush(stdin);
    printf("Ingrese el teléfono celular: ");
    fgets(a->personales.celular, 15, stdin);
    strtok(a->personales.celular, "\n");
}
