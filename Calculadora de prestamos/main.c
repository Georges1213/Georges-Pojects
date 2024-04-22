#include <stdio.h> // Incluye la biblioteca est�ndar de entrada/salida para usar funciones como printf y scanf
#include <math.h> // Incluye la biblioteca matem�tica para usar la funci�n pow

#define N 12 // Definici�n de una constante para representar el n�mero de periodos en un a�o

// Funci�n para calcular el inter�s compuesto
double calculateCompoundInterest(double principal, double rate, int years, int periodsPerYear) {
    // F�rmula para calcular el inter�s compuesto
    double total = principal * pow(1 + (rate / periodsPerYear), years * periodsPerYear);
    return total; // Devuelve el total calculado
}

int main() {
    double principal, rate, years; // Declaraci�n de variables para almacenar el monto principal, la tasa de inter�s y el n�mero de a�os
    int periodsPerYear; // Variable para almacenar el n�mero de periodos por a�o

    printf("Ingrese el monto principal: "); // Pide al usuario que ingrese el monto principal
    scanf("%lf", &principal); // Lee el monto principal ingresado por el usuario

    printf("Ingrese la tasa de inter�s anual (en porcentaje): "); // Pide al usuario que ingrese la tasa de inter�s
    scanf("%lf", &rate); // Lee la tasa de inter�s ingresada por el usuario
    rate /= 100; // Convierte la tasa de inter�s de porcentaje a decimal

    printf("Ingrese el n�mero de a�os: "); // Pide al usuario que ingrese el n�mero de a�os
    scanf("%lf", &years); // Lee el n�mero de a�os ingresado por el usuario

    printf("Ingrese el n�mero de periodos por a�o: "); // Pide al usuario que ingrese el n�mero de periodos por a�o
    scanf("%d", &periodsPerYear); // Lee el n�mero de periodos por a�o ingresado por el usuario

    printf("\n"); // Imprime una l�nea en blanco para mayor legibilidad en la salida

    printf("Per�odo\t| Inter�s\t| Amortizaci�n\t| Total\n"); // Imprime la cabecera de la tabla
    printf("--------------------------------------------------\n"); // Imprime una l�nea horizontal para separar la cabecera del cuerpo de la tabla

    double total = principal; // Inicializa la variable total con el monto principal
    double monthlyRate = rate / periodsPerYear; // Calcula la tasa de inter�s mensual
    int totalPeriods = years * periodsPerYear; // Calcula el n�mero total de periodos

    FILE *file = fopen("tabla_interes_compuesto.txt", "w"); // Abre un archivo para escribir los resultados de la tabla
    if (file == NULL) { // Verifica si hubo alg�n error al abrir el archivo
        printf("Error al abrir el archivo para escribir.\n"); // Imprime un mensaje de error
        return 1; // Retorna un c�digo de error
    }

    fprintf(file, "Per�odo\t| Inter�s\t| Amortizaci�n\t| Total\n"); // Escribe la cabecera de la tabla en el archivo
    fprintf(file, "--------------------------------------------------\n"); // Escribe una l�nea horizontal en el archivo

    // Bucle para calcular e imprimir los resultados para cada periodo
    for (int i = 1; i <= totalPeriods; ++i) {
        double interest = total * monthlyRate; // Calcula el inter�s para el periodo actual
        double amortization = calculateCompoundInterest(total / totalPeriods, monthlyRate, totalPeriods - i, 1); // Calcula la amortizaci�n para el periodo actual
        double newTotal = total - amortization; // Calcula el nuevo total despu�s de la amortizaci�n

        printf("%d\t| %.2f\t\t| %.2f\t\t| %.2f\n", i, interest, amortization, newTotal); // Imprime los resultados en la consola
        fprintf(file, "%d\t| %.2f\t\t| %.2f\t\t| %.2f\n", i, interest, amortization, newTotal); // Escribe los resultados en el archivo

        total = newTotal; // Actualiza el total para el pr�ximo periodo
    }

    fclose(file); // Cierra el archivo despu�s de escribir en �l

    return 0; // Indica que el programa se ejecut� correctamente
}
