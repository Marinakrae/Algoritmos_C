//Desenvolva  um  programa  para  ler  a  temperatura  de  uma  pessoa  doente  e
// mostrar a mensagem �est� com febre� ou �N�o est� com febre� considerando o valor base de 37.5�C.


#include<stdio.h>
#include<stdlib.h> //system pause

int main (void) {

	float temp;

	printf("Insira a temperatura do paciente: \n");
	scanf("%f", &temp);

	if(temp>=37.5) {
		printf("Esta com febre \n");
	} else {
		printf("Nao esta com febre \n");
	}

	system("pause");
}
