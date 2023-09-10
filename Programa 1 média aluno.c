#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "PORTUGUESE");
	int nota1, nota2, media;


	printf("1ª nota: ");
	scanf("%d", &nota1);
	

	printf("2ª nota: ");
	scanf("%d", &nota2);


	media = (nota1 + nota2) / 2;
	printf("A media das notas %d e %d e de: %d\n", nota1, nota2, media);
	
return 0;
}