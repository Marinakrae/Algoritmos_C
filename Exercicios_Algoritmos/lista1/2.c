//Escreva um programa que solicite a dist�ncia percorrida em km  e o tempo de viagem em horas de um autom�vel 
//e dizer se a velocidade m�dia foi superior ao limite de velocidade de80 km/h ou n�o.

#include <stdio.h>

int main (void){
	
	float dist, temp;
	
	printf("Informe e distancia percorrida pelo automovel em km: \n");
	scanf("%f", &dist);
	
	printf("Informe o tempo de viagem em horas do automovel: \n");
	scanf("%f", &temp);
	
	if(dist/temp > 80.0){
		printf("A velocidade media foi superior ao limite de velocidade de 80km/h");
	} else {
		printf("A velocidade media nao foi superior ao limite de velocidade de 80km/h");
	}
}
