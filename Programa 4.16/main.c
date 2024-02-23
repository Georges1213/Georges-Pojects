#include <stdio.h>
#include <math.h>

/* Prototipos de funciones */
void Acutem(float);
void Maxima(float, int);
void Minima(float, int);

/* Variables globales */
float ACT = 0.0;
float MAX = -50.0; // Inicializar con un valor muy bajo
float MIN = 100.0; // Inicializar con un valor muy alto
int HMAX;
int HMIN;

/* Funci�n principal */
void main(void) {
    float TEM;
    int I;
    for (I = 1; I <= 24; I++) {
        printf("Ingresa la temperatura de la hora %d: ", I);
        scanf("%f", &TEM);
        Acutem(TEM);
        Maxima(TEM, I);
        Minima(TEM, I);
    }

    printf("\nPromedio del d�a: %5.2f", (ACT / 24));
    printf("\nM�xima del d�a: %5.2f \tHora: %d", MAX, HMAX);
    printf("\nM�nima del d�a: %5.2f \tHora: %d", MIN, HMIN);
}

/* Funci�n Acutem */
void Acutem(float T) {
    /* Esta funci�n acumula las temperaturas en la variable global ACT
    para posteriormente calcular el promedio. */
    ACT += T;
}

/* Funci�n Maxima */
void Maxima(float T, int H) {
    /* Esta funci�n almacena la temperatura m�xima y la hora en que se
    produjo en las variables globales MAX y HMAX, respectivamente. */
    if (MAX < T) {
        MAX = T;
        HMAX = H;
    }
}

/* Funci�n Minima */
void Minima(float T, int H) {
    /* Esta funci�n almacena la temperatura m�nima y la hora en que se
    produjo en las variables globales MIN y HMIN. */
    if (MIN > T) {
        MIN = T;
        HMIN = H;
    }
}
