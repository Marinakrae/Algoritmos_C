//O índice de massa corporal (IMC) écalculado dividindo-se o peso de uma pessoa pela sua altura ao quadrado.
//Fazer  um  algoritmo  que  leia  o  peso  e  a  altura  de  uma  pessoa,  escrevendo  a  classificação  desta pessoa.

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	float peso, altura, imc;

	printf("Informe o peso e a altura: \n");
	scanf("%f %f", &peso, &altura);

	imc = peso /(altura*altura);

	if (imc >= 0 && imc < 18.5 ) {
		printf ("Abaixo do peso \n");
	} else if (imc >= 18.5 && imc < 25) {
		printf ("Normal \n");
	} else if (imc >= 25 && imc < 30) {
		printf("Pre-obseso \n");
	} else if (imc >= 30 && imc <35) {
		printf("Obeso classe I \n");
	} else if (imc >= 35 && imc < 40) {
		printf("Obeso classe II \n");
	} else if (imc >= 40) {
		printf("Obeso classe III \n");
	}

	system("pause");
}
