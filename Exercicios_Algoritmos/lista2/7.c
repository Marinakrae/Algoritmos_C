// A partir de dois n�meros fornecidos pelo usu�rio, escrever uma das seguintes mensagens:
//a)Os dois s�o pares
//b)Os dois s�o impares
//c)O primeiro � par e o segundo � �mpar
//d)O primeiro � �mpar e o segundo � par

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int n1, n2;

	printf ("Informe dois numeros: \n");
	scanf("%d %d", &n1, &n2);

	if (n1%2==0 && n2%2==0) {
		printf("Os dois sao pares \n");
	} else if (n1%2!=0 && n2%2!=0) {
		printf("Os dois sao impares \n");
	} else if(n1%2==0 && n2%2!=0) {
		printf("O primeiro eh par e o segundo eh impar \n");
	} else if(n1%2!=0 && n2%2==0) {
		printf("O primeiro eh impar e o segundo eh par \n");
	}

	system("pause");
}
