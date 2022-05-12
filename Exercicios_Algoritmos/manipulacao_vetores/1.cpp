#include <stdio.h>

int main(void) {

	float vetor[5];

	for(int i=0; i<5; i++) {
		printf("Informe um numero real:");
		scanf("%f", &vetor[i]);
	}

	printf("A ordem inversa: \n");

	for(int j=4; j>=0; j--) {
		printf("%.2f \n", vetor[j]);
	}
}
