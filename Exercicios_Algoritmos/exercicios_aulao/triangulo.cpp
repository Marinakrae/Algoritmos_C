#include <stdio.h>

int main (void){
	
	float base, altura;
	
	printf ("Infome o valor da base: ");
	scanf("%f", &base);
	
	printf("Informe o valor da altura: ");
	scanf("%f", &altura);
	
	printf("A area do triangulo eh %.2f", (base*altura)/2);
}
