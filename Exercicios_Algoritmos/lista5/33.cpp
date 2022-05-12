#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int n, cont_total=0, cont_pares=0;

	do {

		printf("Informe um numero inteiro:");
		scanf("%d", &n);
		
		if (n!=1000) {
			
			cont_total++;
			
			if(n%2==0) {
				printf("Eh par! \n");
				cont_pares++;
			} else {
				printf("Nao eh par! \n");
			}
		}
	} while (n!=1000);

	printf("Foram lidos %d numeros e %d deles sao pares \n", cont_total, cont_pares);

	system("pause");
}
