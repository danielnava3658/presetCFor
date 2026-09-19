#include <stdio.h>
#include <unistd.h>

int main() {
    int contador;

    printf("Introduce un numero para iniciar la cuenta regresiva: ");
    scanf("%d", &contador);

    printf("\n--- Iniciando cuenta regresiva ---\n");

    while (contador > 0) {
        printf("%d...\n", contador);
        fflush(stdout);
        sleep(1);
        contador--;
    }
    int total_fotogramas = 15;

    for (int i = 0; i < total_fotogramas; i++) {
        printf("\033[2J\033[H");

        int saltos_vacios = 12 - (i * 12 / total_fotogramas);
        if (saltos_vacios < 0) saltos_vacios = 0;

        for (int s = 0; s < saltos_vacios; s++) {
            printf("\n");
        }
        printf("     /\\     \n");
        printf("    |##|    \n");
        printf("    |##|    \n");
        printf("   /    \\   \n");
        printf("  | O  O |  \n");
        printf("   \\_||_/   \n");
        printf("    ||||    \n");

        fflush(stdout);
        usleep(200000);
    }

    return 0;
}
