#include <stdio.h>

int main() {

    int alumnos;
    int i;
    int aprobados = 0;
    int reprobados = 0;
    int bandera = 0;

    double calificacion;
    double suma = 0.0;
    double promedio;

    printf("\033[35m    REGISTRO DE CALIIFCACIONES\033[0m\n");

    printf("Cuantos alumnos deseas registrar?: ");
    scanf("%d", &alumnos);


    if (alumnos > 0) {
        for (i = 1; i <= alumnos; i++) {

            printf("\nAlumno %d\n", i);
            printf("Ingresa su calificacion (0 - 100): ");
            scanf("%lf", &calificacion);

            if (calificacion >= 0 && calificacion <= 100) {

                suma = suma + calificacion;

                if (calificacion >= 60) {
                    printf("Resultado: APROBADO\n");
                    aprobados++;
                }
                else {
                    printf("Resultado: REPROBADO\n");
                    reprobados++;
                }

                if (calificacion == 100 || calificacion == 0) {
                    bandera = 1;
                }

            }
            else {
                printf("Calificacion no valida.\n");
            }
        }

        promedio = suma / alumnos;

        printf("\033[35m              RESULTADOS \033[0m\n");

        printf("Alumnos registrados: %d\n", alumnos);
        printf("Alumnos aprobados: %d\n", aprobados);
        printf("Alumnos reprobados: %d\n", reprobados);
        printf("Promedio general: %.2f\n", promedio);

        if (promedio >= 90 && aprobados > reprobados) {
            printf("El grupo tuvo un excelente rendimiento.\n");
        }
        else if (promedio >= 60 || aprobados > 0) {
            printf("El grupo obtuvo un rendimiento aceptable.\n");
        }
        else {
            printf("El grupo necesita mejorar.\n");
        }
        if (bandera == 1) {
            printf("Se registro al menos una calificacion extrema (0 o 100).\n");
        }

    }
    else {
        printf("La cantidad de alumnos debe ser mayor que 0.\n");
    }

    printf("\nPrograma terminado.\n");

    return 0;
}
