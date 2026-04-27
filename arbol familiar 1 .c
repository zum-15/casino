#include <stdio.h>

int main() {
    int opcion;
    printf("MENU FAMILIAR\n");
    printf("1, abuelos\n");
    printf("2, tios\n");
    printf("3, madres\n"); 
    printf("4, hermano\n");
    printf("5, primos\n");
    printf("6, familia politica\n");
    printf("7, amigos\n");
    printf("Selecciona una opcion: ");
    scanf("%d", &opcion);
    
    switch(opcion) {
        case 1:
            printf("Abuelo: Antonio Bautista Cruz\n");
            printf("Abuela: Sabina Marino Clara\n");
            break;
                
        case 2:
            printf("Javier Bautista Merino\n");
            printf("Amador Merino Bautista\n");
            printf("Crispina Bautista Merino\n");
            break;
        
        case 3:
            printf("Patricia Bautista Merino\n");
            break;
        
        case 4:
            printf("Jesus Hernandez Bautista\n");
            break;
            
        case 5:
            printf("Adamaris Bautista Alavez\n");
            printf("Diego Merino Andrade\n");
            break;
            
        case 6:
            printf("Fernando Lopez Merino\n");
            printf("Ofelia Carro Merino\n");
            break;
            
        case 7:
            printf("Nidia Hazel Gutierrez Rosas\n");
            break;

        default:
            printf("Opcion no valida.\n");
            break;
    }
    
    return 0;
}
