//Fazer um algoritmo que leia dois valores e apresente o maior deles.

#include <stdio.h>

int main (void){
	
	float v1, v2;
	
	printf("Informe o primeiro valor: \n");
	scanf("%f", &v1);
	printf("Informe o segundo valor: \n");
	scanf("%f", &v2);
	
	if(v1>v2){
		printf("O valor maior eh %.2f \n", v1);
	} else {
		printf("O valor maior eh %.2f \n", v2);
	}
}
