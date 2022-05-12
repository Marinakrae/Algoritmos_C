//A temporada do basquete profissional nos Estados Unidos ocorre entre os meses de novembro ejunho do ano seguinte.
// Escreva um programa que leia um mês (um número inteiro entre 1 e 12) eescreva na tela se a temporada está em andamento ou não.

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int m;
	
	printf("Informe o mes (numero entre 1-12): \n");
	scanf("%d", &m);
	
	switch(m){
		case 1: {
			printf("A temporada esta em andamento. \n");
			break;
		}
		case 2: {
			printf("A temporada esta em andamento. \n");
			break;
		}
		case 3: {
			printf("A temporada esta em andamento. \n");
			break;
		}
		case 4: {
			printf("A temporada esta em andamento. \n");
			break;
		}
		case 5: {
			printf("A temporada esta em andamento. \n");
			break;
		}
		case 6: {
			printf("A temporada esta em andamento. \n");
			break;
		}
		case 7: {
			printf("A temporada nao esta em andamento. \n");
			break;
		}
		case 8: {
			printf("A temporada nao esta em andamento. \n");
			break;
		}
		case 9: {
			printf("A temporada nao esta em andamento. \n");
			break;
		}
		case 10: {
			printf("A temporada nao esta em andamento. \n");
			break;
		}
		case 11: {
			printf("A temporada esta em andamento. \n");
			break;
		}
		case 12: {
			printf("A temporada esta em andamento. \n");
			break;
		}
		default: {
			printf("Numero invalido, nao corresponde a nenhum mes! \n");
			break;
		}
	}
	
	system("pause");
}
