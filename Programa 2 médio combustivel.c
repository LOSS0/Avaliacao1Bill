#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "PORTUGUESE");
	int distancia, litrocombustivel, mediaconsumo;
		
		printf ("distancia corrida: ");
		scanf ("%d", &distancia);
		
		printf ("Quantos litros de combustivel gasto nessa distancia: ");
		scanf ("%d", &litrocombustivel);
		
	mediaconsumo = distancia / litrocombustivel;
		printf ("Consumo medio de combustivel foi di %d km/l", mediaconsumo);
		
return 0;
}
