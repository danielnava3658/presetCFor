#include <stdio.h>

int main() {
    int numero;
    int suma = 0;

    do {
        printf("Introduce un número (ingresa 0 para terminar): ");
        scanf("%d", &numero);

        suma += numero;

    } while (numero != 0); // El ciclo se repite mientras el número sea diferente de 0

    printf("\nLa suma total de todos los números ingresados es: %d\n", suma);

    return 0;
}
