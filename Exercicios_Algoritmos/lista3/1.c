//1) Um funcion�rio ir� receber um aumento de acordo com o seu plano de trabalho, de acordo com atabela abaixo:
//Fa�a um programa que leia o plano de trabalho e o sal�rio atual de um funcion�rio e calcula eimprime o seu novo sal�rio.

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float salario;
	char plano;
	
	printf("Informe o plano de trabalho do funcionario (A, B, C) :\n");
	scanf("%c", &plano);
	
	printf("Informe o salario do funcionario: \n");
	scanf("%f", &salario);
	
	switch(plano){
		case 'A': {
			salario = salario + salario * 0.1;
			break;
		}
		case 'B': {
			salario = salario + salario * 0.15;
			break;
		}
		case 'C': {
			salario = salario + salario * 0.2;
			break;
		}
		case 'a': {
			salario = salario + salario * 0.1;
			break;
		}
		case 'b': {
			salario = salario + salario * 0.15;
			break;
		}
		case 'c': {
			salario = salario + salario * 0.2;
			break;
		}	
	}
	
	printf("O novo salario eh: R$%.2f \n", salario);
}
