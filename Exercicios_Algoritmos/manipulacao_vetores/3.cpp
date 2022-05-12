#include <stdio.h>

int main (void) {

	int vetor[10], aux;

	for (int i=0; i<10; i++) {

		printf("Informe um numero: ");
		scanf("%d", &vetor[i]);
	}
	
	for(int i=0; i<10; i++) {
		printf("%d ", vetor[i]);
	}

	aux = vetor[0];

	for (int i=0; i<10; i++) {
		vetor[i] = vetor[i+1]; //nao da pra usar o i++ pq seria o adiantamento do incremento do for
	}
	
	vetor[9] = aux;

	printf("Vetor: \n");

	for(int i=0; i<10; i++) {
		printf("%d ", vetor[i]);
	}

}
