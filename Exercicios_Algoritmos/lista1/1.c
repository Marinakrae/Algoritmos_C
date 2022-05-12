//Desenvolva um programa para ler a temperatura  de uma pessoa doente e mostre a mensagem informando se ela está com febre(acima de 36.5 graus) ou não.

#include <stdio.h>

int main (void){
	
	float temp;
	
	printf("Informe a temperatura: \n");
	scanf("%f", &temp);
	
	if(temp>36.5){
		printf("Voce esta com febre :(");
	} else {
		printf("Voce nao esta com febre :)");
	}
}
