#include <stdio.h>
#include <math.h> // Librería para pow() y sqrt()

int main() {
    float num1, num2, resultado;
    int opcion;

    printf("--- CALCULADORA AVANZADA ---\n");
    printf("Ingresa el valor A: ");
    scanf("%f", &num1);
    printf("Ingresa el valor B: ");
    scanf("%f", &num2);

    printf("\n1. Suma 2. Resta 3. Mult 4. Div\n");
    printf("5. Potencia (A^B) 6. Raiz (vA) 7. Porcentaje (A%% de B)\n");
    printf("Seleccion: ");
    scanf("%d", &opcion);
    
    switch(opcion) {
        case 1: resultado = num1 + num2; break;
        case 2: resultado = num1 - num2; break;
        case 3: resultado = num1 * num2; break;
        case 4:
            if(num2 != 0) resultado = num1 / num2;
            else { printf("Error!"); return 1; }
            break;
        case 5:
            resultado = pow(num1, num2); break;
        case 6:
            if(num1 >= 0) resultado = sqrt(num1);
            else { printf("Raiz imaginaria!"); return 1; }
            break;
        case 7:
            resultado = (num1 * num2) / 100; break;
        default: printf("Invalido"); return 1;
    }

    printf("\nResultado final: %.2f\n", resultado);
    return 0;
}
