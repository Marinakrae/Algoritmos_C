#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int n, para_j=0, para_k=0, num=1;

	printf("Insira um numero inteiro positivo: ");
	scanf("%d", &n);

		for (int j = 1; j <= n; j++) { //n de numeros na linha   1 numero
			for (int k = 1; k <= j; k++) { //numero    numero 1
				printf("%d ", num);
				num++;
			}
			printf("\n");
		}

	system("pause");
}
