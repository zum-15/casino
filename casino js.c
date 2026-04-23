#include <stdio.h>
#include <stdio.h>
#include <time.h>

int main (){
	int numUsuario, ganador, i;
	int acierto =0;//inicialzamos La bandera en 0 (no ha ganado)
	float apuesta;
	ganador = rand ()%101;
	printf("---BIENVENIDO AL CASINO LOGICA---\n");
	printf("instrucciones:Da 10 intentos para adivinar el numero secreto,\n\n");
	
	printf("¿cuanto dinerodeseas apostar? $");
	scanf("%f", &apuesta);
	for(i=1; i<10; i++){
			printf("intento #%d - ingresa el numero: ", i);
			scanf("%d, &numUsuario");
			if(numUsuario = ganador){
				acierto=1;
				
			}
		
	}
	printf("\n ==================\n");
	if(acierto=1){
		printf("ENHORABUENA uno de tus numeros fue el ganador. \n");
		printf("El numero secreto era: %d\n", ganador);
		printf("premio ganado (x5): $%.2f\n", apuesta *5);
		
		
	}else{
		printf("MAS SUERTE PARA LA PROXIMA.\n");
		printf("el numero secreto era: %d\n", ganador);
		printf("tu aouesta de $%.2f ha sido recolectada.\n", apuesta);
		
	}
	printf("==================\n");
	return 0;
}

