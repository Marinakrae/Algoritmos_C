//Elabore um programa que leia um n�mero inteiro entre 1 e 12 e imprima o m�s correspondente.Caso seja digitado um valor fora desse intervalo, 
//dever� ser exibida uma mensagem informando quen�o existe m�s com esse n�mero.

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int n;
	
	printf("Informe um numero inteiro entre 1 e 12: \n");
	scanf("%d", &n);
	
	switch(n){
		case 1:{
			printf("Janeiro \n");
			break;
		}
		case 2:{
			printf("Fevereiro \n");
			break;
		}
		case 3:{
			printf("Mar�o \n");
			break;
		}
		case 4:{
			printf("Abril \n");
			break;
		}
		case 5:{
			printf("Maio \n");
			break;
		}
		case 6:{
			printf("Junho \n");
			break;
		}
		case 7:{
			printf("Julho \n");
			break;
		}
		case 8:{
			printf("Agosto \n");
			break;
		}
		case 9:{
			printf("Setembro \n");
			break;
		}
		case 10:{
			printf("Outubro \n");
			break;
		}
		case 11:{
			printf("Novembro \n");
			break;
		}
		case 12:{
			printf("Dezembro \n");
			break;
		}
		default:{
			printf("N�o existe um mes com este numero! \n");
			break;
		}
	}
	
	system("pause");
}
