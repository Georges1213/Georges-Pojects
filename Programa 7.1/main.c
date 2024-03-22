#include <stdio.h>

int main(void) {
    char p1, p2, p3 = '$'; // Corregido el delimitador de caracteres
    printf("\nIngrese un caracter: ");
    p1 = getchar();
    putchar(p1);
    printf("\n");
    fflush(stdin);
    printf("\nEl caracter p3 es: ");
    putchar(p3);
    printf("\n");
    return 0; // Se añade la declaración de retorno para main
}
