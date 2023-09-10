#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "PORTUGUESE");
    int cateto1, cateto2, hipotenusa;

    printf("medida cateto1: ");
    scanf("%d", &cateto1);

    printf("medida cateto2: ");
    scanf("%d", &cateto2);

    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    printf("Hipotenusa e: %d", hipotenusa);

    return 0;
}