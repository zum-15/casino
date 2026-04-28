#include <stdio.h>
#include <math.h>

int main() {
    int opcion, i;
    double num1, num2, resultado;

    printf("--- Calculadora Pro max ---\n");

    for (i = 0; i < 10; i++) {
        printf("\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Potencia\n6. Raiz Cuadrada\n7. Porcentaje\n8");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);

        if (opcion == 8) {
            printf("Saliendo del programa...\n");
            break; 
        }

        if (opcion >= 1 && opcion <= 5) {
            printf("Ingresa el primer numero: ");
            scanf("%lf", &num1);
            printf("Ingresa el segundo numero (o exponente): ");
            scanf("%lf", &num2);
        } 
    
        else if (opcion == 6 || opcion == 7) {
            printf("Ingresa el numero: ");
            scanf("%lf", &num1);
        }

        switch (opcion) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: ", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: ", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado: ", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado:", resultado);
                } else {
                    printf("Error: Division por cero.\n");
                }
                break;
            case 5:
                resultado = pow(num1, num2);
                printf("Resultado:", resultado);
                break;
            case 6:
                if (num1 >= 0) {
                    resultado = sqrt(num1);
                    printf("Resultado: ", resultado);
                } else {
                    printf("Error: Numero negativo en raiz.\n");
                }
                break;
            case 7:
                resultado = num1 / 100;
                printf("Resultado en decimal:n    ", resultado);
                break;
            default:
                printf("Opcion no valida.\n");
        }
    }

    return 0;
}
