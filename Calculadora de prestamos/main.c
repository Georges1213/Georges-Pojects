#include <stdio.h> // Incluye la biblioteca estándar de entrada/salida para usar funciones como printf y scanf
#include <math.h> // Incluye la biblioteca matemática para usar la función pow

#define N 12 // Definición de una constante para representar el número de periodos en un año

// Función para calcular el interés compuesto
double calculateCompoundInterest(double principal, double rate, int years, int periodsPerYear) {
    // Fórmula para calcular el interés compuesto
    double total = principal * pow(1 + (rate / periodsPerYear), years * periodsPerYear);
    return total; // Devuelve el total calculado
}

int main() {
    double principal, rate, years; // Declaración de variables para almacenar el monto principal, la tasa de interés y el número de años
    int periodsPerYear; // Variable para almacenar el número de periodos por año

    printf("Ingrese el monto principal: "); // Pide al usuario que ingrese el monto principal
    scanf("%lf", &principal); // Lee el monto principal ingresado por el usuario

    printf("Ingrese la tasa de interés anual (en porcentaje): "); // Pide al usuario que ingrese la tasa de interés
    scanf("%lf", &rate); // Lee la tasa de interés ingresada por el usuario
    rate /= 100; // Convierte la tasa de interés de porcentaje a decimal

    printf("Ingrese el número de años: "); // Pide al usuario que ingrese el número de años
    scanf("%lf", &years); // Lee el número de años ingresado por el usuario

    printf("Ingrese el número de periodos por año: "); // Pide al usuario que ingrese el número de periodos por año
    scanf("%d", &periodsPerYear); // Lee el número de periodos por año ingresado por el usuario

    printf("\n"); // Imprime una línea en blanco para mayor legibilidad en la salida

    printf("Período\t| Interés\t| Amortización\t| Total\n"); // Imprime la cabecera de la tabla
    printf("--------------------------------------------------\n"); // Imprime una línea horizontal para separar la cabecera del cuerpo de la tabla

    double total = principal; // Inicializa la variable total con el monto principal
    double monthlyRate = rate / periodsPerYear; // Calcula la tasa de interés mensual
    int totalPeriods = years * periodsPerYear; // Calcula el número total de periodos

    FILE *file = fopen("tabla_interes_compuesto.txt", "w"); // Abre un archivo para escribir los resultados de la tabla
    if (file == NULL) { // Verifica si hubo algún error al abrir el archivo
        printf("Error al abrir el archivo para escribir.\n"); // Imprime un mensaje de error
        return 1; // Retorna un código de error
    }

    fprintf(file, "Período\t| Interés\t| Amortización\t| Total\n"); // Escribe la cabecera de la tabla en el archivo
    fprintf(file, "--------------------------------------------------\n"); // Escribe una línea horizontal en el archivo

    // Bucle para calcular e imprimir los resultados para cada periodo
    for (int i = 1; i <= totalPeriods; ++i) {
        double interest = total * monthlyRate; // Calcula el interés para el periodo actual
        double amortization = calculateCompoundInterest(total / totalPeriods, monthlyRate, totalPeriods - i, 1); // Calcula la amortización para el periodo actual
        double newTotal = total - amortization; // Calcula el nuevo total después de la amortización

        printf("%d\t| %.2f\t\t| %.2f\t\t| %.2f\n", i, interest, amortization, newTotal); // Imprime los resultados en la consola
        fprintf(file, "%d\t| %.2f\t\t| %.2f\t\t| %.2f\n", i, interest, amortization, newTotal); // Escribe los resultados en el archivo

        total = newTotal; // Actualiza el total para el próximo periodo
    }

    fclose(file); // Cierra el archivo después de escribir en él

    return 0; // Indica que el programa se ejecutó correctamente
}
