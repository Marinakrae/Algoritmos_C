#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int n, i=0, soma=0, pares=1;

	while (pares<=50) {
		if (i%2==0) { 
			soma = soma + i;
			pares++;
		}
		i++;
	}

	printf("A soma dos 50 primeiros numeros pares eh: %.d \n", soma);

	system("pause");
}
