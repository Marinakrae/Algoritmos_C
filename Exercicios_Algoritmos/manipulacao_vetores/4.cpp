#include <stdio.h>

int main (void) {

	int vetA[6], vetB[6], vetC[6], vetD[6], a=0, b=0;

	printf("Populacao do vetor A: \n");

	for (int i=0; i<6; i++) {
		printf("Informe um numero: ");
		scanf("%d", &vetA[i]);
	}

	printf("Populacao do vetor B: \n");

	for (int i=0; i<6; i++) {
		printf("Informe um numero: ");
		scanf("%d", &vetB[i]);
	}

	for (int i=0; i<6; i++) { //for para o C (impar)

		if (i%2!=0) {
			vetC[a] = vetA[i];
			vetC[a+1] = vetB[i];
			
			a = a + 2;
		} else {
			vetD[b] = vetA[i];
			vetD[b+1] = vetB[i];
			
			b = b + 2;
		}

	}

	printf("Vetor C: \n");

	for(int i=0; i<6; i++) {
		printf("%d ", vetC[i]);
	}

	printf("\nVetor D: \n");

	for(int i=0; i<6; i++) {
		printf("%d ", vetD[i]);
	}
}
