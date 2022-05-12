#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int n;
	
	printf("Informe um numero inteiro entre 1 e 7:\n");
	scanf("%d", &n);
		
	switch(n){
		case 1: {
			printf("Domingo \n");
			break;
		}case 2: {
			printf("Segunda-feira \n");
			break;
		}case 3: {
			printf("Terça-feira \n");
			break;
		}case 4: {
			printf("Quarta-feira \n");
			break;
		}case 5: {
			printf("Quinta-feira \n");
			break;
		}case 6: {
			printf("Sexta-feira \n");
			break;
		}case 7: {
			printf("Sabado \n");
			break;
		}default:{
			printf("Numero invalido \n");
			break;
		}
	}
			
	system("pause");
}
