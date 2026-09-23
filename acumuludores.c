#include <stdio.h>

int main() {
    float total_compra = 0;
    float precio;

    printf("--- Calculadora de compras ---\n");

    for (int i = 1; i <= 3; i++) {
        printf("Ingresa el precio del producto %d: ", i);
        scanf("%f", &precio);

        total_compra += precio;
    }

    printf("El total acumulado a pagar es: $%.2f\n", total_compra);

    return 0;
}
