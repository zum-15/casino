#include <stdio.h>
int main (){
	int opcion;
		printf(" MENU- LIGAS DE FUTBOL\n");
		printf("1. LIGA MX\n");
		printf("2. La Liga\n");
		printf("3. MLS\n");
		printf("4. Premier\n");
		printf("5. Alemana\n");
		printf("6. Holanda");
	              printf("7. Selecciona una opcion: ");
		scanf("%d", &opcion);
		
		switch (opcion){
			case 1:
				printf("América, Chivas, Cruz Azul, Pumas, Tigres, Monterrey, Mazatlán, Necaxa, Queretaro, Puebla\n");
				break;
				case 2:
				printf("Real Madrid, FC Barcelona, Atlético de Madrid, Sevilla, Athletic Club, Villarreal, Betis, Valencia, Girona, Celta\n");
				break;
				case 3:
				printf("Atlanta United FC,Charlotte FC,Chicago Fire FC,FC Cincinnati,Columbus Crew,D.C. United,Inter Miami CF,CF Montréal,Nashville SC,New England Revolution\n");
				break;
				case 4: 
				printf("Arsenal,Liverpool,Manchester City,Manchester United, Chelsea,Tottenham,Aston,Villa, Newcastle\n");
				break;
				case 5:
				printf("Bayern Múnich,Borussia Dortmund,Bayer Leverkusen,RB Leipzig,Eintracht Frankfurt,VfB Stuttgart,Borussia M'gladbach,VfL Wolfsburgo,SC Friburgo,Werder Bremen\n");
				break;
				case 6:
				printf("PSV Eindhoven,Ajax de Ámsterdam,AZ Alkmaa,FC Twente,NEC Nijmegen,FC Utrecht,SC Heerenveen,Sparta de Rotterdam,Go Ahead Eagles,FC Groningen\n");
				break;
				case 7:
                                                        printf("Saliendo... ¡Hasta pronto!\n");
                                                        break;
			
			default:
				printf("Opcion invalida\n");
				
			
					
	
		}
		return 0;
}
