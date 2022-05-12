#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int n, i=0;
	float media=0;

	while (i<10) {
		printf("Informe um numero positivo: \n");
		scanf("%d", &n);

		if(n>0) {
			media = media + n;
			i++;
		} else {
			printf("Numero negativo! \n");
		}
	}

	printf("A media eh: %.2f \n", media/10);

	system("pause");
}
