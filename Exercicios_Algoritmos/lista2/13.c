//Fazer  um  algoritmo  que  leia  valores  para  as  variáveis  hora,  minuto  e  segundo;
// verificando  e escrevendo  se  elascorrespondem  a  um  horário  válido  ou  não.
//Para  um  horário  ser  valido,  a  hora deve estar no intervalo de 0 a 23, o minuto e o segundo no intervalo de 0 a 59.

#include<stdio.h>
#include<stdlib.h>

int main (void) {

	int hora, min, seg;

	printf("Insira a hora, minuto e segundo: \n");
	scanf("%d %d %d", &hora, &min, &seg);

	if (hora >= 0 && hora <= 23 && min >= 0 && min <= 59 && seg >= 0 && seg <= 59) {
		printf ("O horario eh valido \n");
	} else {
		printf ("O horario nao eh valido \n");
	}

	system("pause");
}
