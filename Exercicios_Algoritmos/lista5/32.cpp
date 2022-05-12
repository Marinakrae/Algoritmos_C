#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int qtd, n, maior=-9999, cont_maior=0;

	printf("Informe a quantidade de numeros a serem lidos:");
	scanf("%d", &qtd);

	for(int i=0; i<qtd; i++) {
		printf("Informe um numero:");
		scanf("%d", &n);

		if(n>=maior) {

			if(n==maior) { //se o numero ja eh igual ao maior
				cont_maior++;
			} else {
				maior=n;
				cont_maior=1; //zera se achar um novo
			}
		}
	}

	printf("O maior numero eh %d e foi lido %d vezes\n", maior, cont_maior);

	system("pause");
}
