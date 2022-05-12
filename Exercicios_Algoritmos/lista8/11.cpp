#include <stdio.h>

int main (void) {

	float vetX[6], vetY[6];

	for(int i=0; i<6; i++) {

		printf("Informe um valor:");
		scanf("%f", &vetX[i]);

	}

	for(int i=0; i<6; i++) {
		if(i%2==0) { //indice par

			vetY[i] = vetX[i+1];
		} else {
			vetY[i] = vetX[i-1];
		}

	}
	
	printf("Vetor X:\n");
	
	for(int i=0; i<6; i++){
		printf("%.2f ", vetX[i]);
	}
	
	printf("\nVetor Y:\n");
	
	for(int i=0; i<6; i++){
		printf("%.2f ", vetY[i]);
	}
}
