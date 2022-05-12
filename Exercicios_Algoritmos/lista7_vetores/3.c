#include <stdio.h>
#include <stdlib.h>

A[10], B[10];

void leitura (int i) {
	printf("Vetor A[%d]: ", i);
	scanf("%d", &A[i]);
	B[i] = (A[i]*2);
}

void impressao (int vet[]) {
	int k;
	for (k=0; k<10; k++) {
		printf("%d\n", vet[k]);
	}
}

int main (void) {
	int i;
	for (i=0; i<10; i++) {
		leitura(i);
	}

	printf("\nVetor A: \n");
	impressao(A);
	printf("\nVetor B: \n");
	impressao(B);

	system("pause");
}
