#include <stdio.h>

int main (void) {

	float vetor[20];

	for (int i=0; i<10; i++) {

		printf("Informe um numero:");
		scanf("%f", &vetor[i]);

		if (i%2==0) {
			vetor[i+10] = (vetor[i] + (vetor[i] * 0.02));
		} else {
			vetor[i+10] = (vetor[i] + (vetor[i] * 0.05));
		}
	}

	printf("Vetor: \n");

	for (int j=0; j<20; j++) {
		printf("%.2f \n", vetor[j]);
	}

}
