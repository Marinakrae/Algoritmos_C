#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
	
	float n;
	
	printf("Informe um numero:\n");
	scanf("%f", &n);
	
	if(n>0){
		printf("A raiz quadrada do numero eh: %.2f\n", sqrt(n));
	} else {
		printf("O numero eh invalido");
	}
		
	system("pause");
}
