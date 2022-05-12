#include<stdio.h>

int main (void) {

	int vetA[15], vetB[15];

	for(int i=0; i<15; i++) {

		printf("Informe um valor:");
		scanf("%d", &vetA[i]);

		vetB[i] = (vetA[i] * vetA[i]);
	}

	printf("Vetor A \n");
	
	for(int i=0; i<10; i++){
		
		printf("%d\n", vetA[i]);
		
	}
	
	printf("Vetor B \n");
	
	for(int i=0; i<10; i++){
		
		printf("%d\n", vetB[i]);
		
	}

}
