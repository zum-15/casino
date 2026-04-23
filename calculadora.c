#include <stdio.h>
int main() {
	int opcion;
	printf("MENU DE FINANZAS\n");
	printf("1, ver saldo\n");
	printf("2, depositar dinero\n");
	printf("3, retirar dinero\n"); 
	printf("4, salir\n");
	printf("selecciona una opcion:");
	scanf("%d", &opcion);
	
	switch (opcion){
		case 1:
			printf("tusaldo es de $1000\n");
			break;
			case 2:
				printf("has depositado dinero\n");
				break;
				case 3:
					printf("has retirado dinero\n");
					break;
					case 4:
						printf("saliendo del sistema\n");
						break;
						
						default:
							printf("opcion invalida\n");
						
	}
	return 0;
}
