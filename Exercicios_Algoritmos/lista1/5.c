//A partir de dois n�meros fornecidos pelo usu�rio, escrever uma das seguintes mensagens:
//a) Os dois s�o pares
//b) Os dois s�o impares
//c) O primeiro � par e o segundo � �mpar
//d) O primeiro � �mpar e o segundo � par

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
