#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
	
	float a, b;
	
	printf("Informe valores a e b (catetos do triangulo):\n");
	scanf("%f %f", &a, &b);
	
	printf("O valor da hipotenusa eh %.2f \n", sqrt((a*a)+(b*b)));
	
	system("pause");
}
