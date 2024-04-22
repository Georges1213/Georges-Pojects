#include <stdio.h>

typedef struct {
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void lee(FILE *);

int main(void) {
    FILE *ar;

    if ((ar = fopen("ad1.dat", "rb")) != NULL) { // Cambiado a "rb" para modo binario
        lee(ar); // Cambiado de "escribe" a "lee"
        fclose(ar); // Movido al final de la función main
    } else {
        printf("\nEl archivo no se puede abrir\n");
    }

    return 0; // Devuelve un valor int al sistema operativo
}

void lee(FILE *ap) {
    alumno alu;

    while (fread(&alu, sizeof(alumno), 1, ap) == 1) { // Verifica la lectura exitosa antes de continuar
        printf("\nMatrícula: %d", alu.matricula);
        printf("\tCarrera: %d", alu.carrera);
        printf("\tPromedio: %f\t ", alu.promedio);
        puts(alu.nombre);
    }
}
