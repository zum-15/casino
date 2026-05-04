#include <stdio.h>

int main() {
    int opcion, repetir = 1;
    int intento, numeroSecreto = 7;
    int i;

    while (repetir == 1) {
        printf("\n--- MENU ---\n");
        printf("1. Jugar\n2. Contador\n3. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: // Lógica del juego
                printf("Adivina el numero secreto: ");
                scanf("%d", &intento);
                if (intento == numeroSecreto) {
                    printf("¡Ganaste!\n");
                } else if (intento < numeroSecreto) {
                    printf("Muy bajo\n");
                } else {
                    printf("Muy alto\n");
                }
                break;

            case 2: // Lógica del contador
                printf("Contando del 1 al 10:\n");
                for (i = 1; i <= 10; i++) {
                    printf("%d ", i);
                }
                printf("\n");
                break;

            case 3: // Salida
                printf("Saliendo...\n");
                repetir = 0;
                break;

            default:
                printf("Opcion no valida\n");
                break;
        }
    }

    return 0;
}
