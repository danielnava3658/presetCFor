#include <stdio.h>

int main() {
    int contador = 0; // 1. Inicialización del contador en 0

    // Bucle que se repite 5 veces
    for (int i = 0; i < 5; i++) {
        contador++; // 2. Incremento del contador en cada iteración
    }

    // 3. Resultado final
    printf("El ciclo se ejecuto %d veces.\n", contador);

    return 0;
}
