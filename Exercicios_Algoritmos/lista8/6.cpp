#include<stdio.h>

int main (void) {

	float vet[5];

	for(int i=0; i<5; i++) {

		printf("Informe um valor:");
		scanf("%f", &vet[i]);

	}

	for(int i=4; i>=0; i--) {

		printf("%.2f ", vet[i]);

	}

}
