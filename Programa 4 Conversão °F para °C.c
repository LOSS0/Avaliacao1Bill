#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "PORTUGUESE");
	
	int Fahrenheit, Celsius;
	
		printf ("Informe o valor em °F: ");
		scanf ("%d", &Fahrenheit);
		
		Celsius = (Fahrenheit - 32) * (5.0 / 9.0);
		printf ("A conversao de %d Fahrenheit para Celsius e: %d", Fahrenheit, Celsius);
	
return 0;
}