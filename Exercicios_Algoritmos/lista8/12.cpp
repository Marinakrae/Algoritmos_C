#include <stdio.h>

int main (void) {

	float vet[20];

	for(int i=0; i<10; i++) {

		printf("Informe um valor:");
		scanf("%f", &vet[i]);
		
		if(i%2==0) {
			vet[i+10] = vet[i] + vet[i]*0.02;
		} else {
			vet[i+10] = vet[i] + vet[i]*0.05;
		}
	}
	
	for(int i=0; i<20; i++){
		printf ("%.2f ", vet[i]);
	}
}
