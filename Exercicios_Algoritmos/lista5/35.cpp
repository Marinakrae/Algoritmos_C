#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int n;

	printf("Informe um numero positivo: \n");
	scanf("%d", &n);

	printf("Os divisores de %d sao: \n", n);

	for (int i = 1; i <= n; i++) {

		if(n%i==0) {
			printf("%d \n", i);
		}
	}

	system("pause");
}
