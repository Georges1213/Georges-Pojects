#include <stdio.h>

typedef struct {
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void ordena(FILE *, FILE *);

void main(void) {
    FILE *ar1, *ar2;

    ar1 = fopen("ad5.dat", "rb");
    ar2 = fopen("ad6.dat", "wb");

    if ((ar1 != NULL) && (ar2 != NULL))
        ordena(ar1, ar2);
    else
        printf("\nEl o los archivos no se pudieron abrir");

    fclose(ar1);
    fclose(ar2);
}

void ordena(FILE *ap1, FILE *ap2) {
    alumno alu;
    int t, n, i;

    fseek(ap1, 0, SEEK_END); // Posiciona el puntero al final del archivo
    n = ftell(ap1) / sizeof(alumno); // Calcula el número de registros
    rewind(ap1); // Vuelve al principio del archivo

    for (i = 0; i < n; i++) {
        fseek(ap1, -sizeof(alumno) * (i + 1), SEEK_END); // Posiciona el puntero al registro i desde el final
        fread(&alu, sizeof(alumno), 1, ap1); // Lee el registro
        fwrite(&alu, sizeof(alumno), 1, ap2); // Escribe el registro en el nuevo archivo
    }
}
