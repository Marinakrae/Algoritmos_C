#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
	
	int n;
	
	printf("Informe um numero inteiro:\n");
	scanf("%d", &n);
		
	if (n<0){
		printf("Numero invalido!\n");
	} else {
		printf("Logaritmo de %d eh %f \n", n, log10(n));
	}
			
	system("pause");
}
