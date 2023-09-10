#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "PORTUGUESE");
	char caractere;

		printf("Selecione um caractere: ");
		scanf("%c", &caractere);

		int codigoDecimal = (int)caractere;
		int codigoHexadecimal = codigoDecimal;

		printf("O código ASCII de %c em decimal e: %d", caractere, codigoDecimal);
		printf("O código ASCII de %c em hexadecimal e: 0x%X", caractere, codigoHexadecimal);
    
return 0;
}




