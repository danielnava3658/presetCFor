#include <stdio.h>

int main() {
    int numeros[] = {5, 12, 23, 45, 60};
    int buscar = 23;
    int encontrado = 0;

    for (int i = 0; i < 5; i++) {
        if (numeros[i] == buscar) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("Exito! El numero %d esta en la lista.\n", buscar);
    } else {
        printf("Lo siento, el numero %d no se encontró.\n", buscar);
    }

    return 0;
}
