#include<stdio.h>

int main (void) {

	int vet1[5], vet2[8], vet3[13];
	
	printf("Vetor 1: \n");

	for(int i=0; i<5; i++) {

		printf("Informe um valor:");
		scanf("%d", &vet1[i]);
		
		vet3[i] = vet1[i];

	}
	
	printf("Vetor 2: \n");
	
	for(int i=0; i<8; i++) {

		printf("Informe um valor:");
		scanf("%d", &vet2[i]);

	}

	for(int i=5; i<13; i++) {

		vet3[i] = vet2[i-5];

	}
	
	printf("Vetor 3: \n");
	
	for(int i=0; i<13; i++) {

		printf("%d ", vet3[i]);

	}

}
