#include<stdio.h>

int main (void) {

	int vet1[5], vet2[5];

	for(int i=0; i<5; i++) {

		printf("Informe um valor:");
		scanf("%d", &vet1[i]);

		int aux = vet1[i];
		vet2[i]= 0;
		
		for(int j = aux; j>0; j--){
			vet2[i] = (vet2[i]+j);
		}
	}

	printf("Vetor 2: \n");
	
	for(int i=0; i<5; i++) {

		printf("%d ", vet2[i]);

	}

}
