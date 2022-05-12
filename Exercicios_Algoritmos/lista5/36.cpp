#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int n, soma=0;

	printf("Informe um numero inteiro: \n");
	scanf("%d", &n);

	printf("A soma dos divisores do numero %d eh", n);

	for (int i = 1; i < n; i++) {

		if(n%i==0) {
			if(i==1) {
				printf (" %d", i);
				soma = soma+i;
			} else {
				printf (" + %d", i);
				soma = soma+i;
			}
		}
	}

	printf(" = %d\n", soma);

	system("pause");
}
