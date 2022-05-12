//Escrever  um  algoritmoque  solicite  a  distância  em  km  e  o  tempo  de  viagem  em  horas  de  um automóvel
//e dizer se a velocidade média foi superior ao limite de 110km/h ou não.

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	float dist, temp;

	printf("Informe a distancia em km percorrida pelo automovel: \n");
	scanf("%f", &dist);

	printf("Informe o tempo de viagem em horas: \n");
	scanf("%f", &temp);

	if((dist/temp)>110) {
		printf("A velocidade media foi superior a 110km/h \n");
	} else {
		printf("A velocidade media nao foi superior a 110km/h \n");
	}
	system("pause");
}
