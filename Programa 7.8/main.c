#include <stdio.h>
#include <string.h>
#include <ctype.h>

void minymay(char *cadena);

int main(void) {
    int i, n;
    char FRA[20][50];

    printf("\nIngrese el número de filas del arreglo: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Ingrese la línea %d de texto: ", i + 1);
        fflush(stdin);
        fgets(FRA[i], 50, stdin);
        FRA[i][strlen(FRA[i]) - 1] = '\0'; // Remove newline character
    }

    printf("\n\n");
    for (i = 0; i < n; i++)
        minymay(FRA[i]);

    return 0;
}

void minymay(char *cadena) {
    int i = 0, mi = 0, ma = 0;

    while (cadena[i] != '\0') {
        if (islower(cadena[i]))
            mi++;
        else if (isupper(cadena[i]))
            ma++;
        i++;
    }

    printf("\n\nNúmero de letras minúsculas: %d", mi);
    printf("\nNúmero de letras mayúsculas: %d", ma);
}

}
