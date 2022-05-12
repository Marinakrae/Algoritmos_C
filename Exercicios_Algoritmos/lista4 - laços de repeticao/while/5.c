//Fazer um algoritmo que leia um número inteiro e mostre uma mensagem dizendo se é primo ounão.

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int n, i=1, contador=0;

	printf("Informe um numero inteiro: \n");
	scanf("%d", &n);

	while(i<=n) {

		if (n % i == 0) {
			contador++;
		}

		i++;
	}

	if (contador == 2) { //só aceita 2, ele mesmo e o 1
		printf("%d eh um numero primo\n", n);
	} else {
		printf("%d nao eh um numero primo\n", n);
	}


	system("Pause");
}
