//Fazer um algoritmo que leia dois números e apresente-os em ordem crescente.

#include <stdio.h>

int main (void){
	
	float n1, n2;
	
	printf("Digite o primeiro numero: \n");
	scanf("%f", &n1);
	printf("Digite o segundo numero: \n");
	scanf("%f", &n2);
	
	if(n1<n2){
		printf("Numeros em ordem crescente:\n %.2f \n %.2f \n", n1, n2);
	} else {
		printf("Numeros em ordem crescente: \n %.2f \n %.2f \n", n2, n1);
	}
}
