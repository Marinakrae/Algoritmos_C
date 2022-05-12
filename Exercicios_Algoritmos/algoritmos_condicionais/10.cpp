#include <stdio.h>
#include <string.h>

int main (void){
	
	float p, a, imc;
	
	printf("Peso: ");
	scanf("%f", &p);
	printf("Altura: ");
	scanf("%f", &a);
	
	imc = p/(a*a);
	
	if (imc < 18.5){
		printf("Abaixo do peso");
	} else if (imc >= 18.5 && imc <= 25){
		printf("Peso normal");
	} else if (imc > 25 && imc <= 30){
		printf("Acima do peso");
	} else if (imc > 30){
		printf("Obeso");
	}
}
