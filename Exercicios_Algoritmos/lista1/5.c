//A partir de dois números fornecidos pelo usuário, escrever uma das seguintes mensagens:
//a) Os dois são pares
//b) Os dois são impares
//c) O primeiro é par e o segundo é ímpar
//d) O primeiro é ímpar e o segundo é par

#include <stdio.h>

int main (void){
	
	int n1, n2;
	
	printf("Informe dois numeros: \n");
	scanf("%d %d", &n1, &n2);
	
	if (n1%2==0) //se o resto da divisao por 2 da 0 entao eh par 
	{
		if (n2%2==0) {
			printf("Os dois sao pares");
		} else {
			printf ("O primeiro eh par e o segundo eh impar");
		}
	} else {
		//o n1 eh impar
		if (n2%2==0){
			printf("O primeiro eh impar e o segundo eh par");
		} else {
			printf ("Os dois sao impares");
		}
	}
}
