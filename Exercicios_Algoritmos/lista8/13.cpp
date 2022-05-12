#include <stdio.h>

int main (void){
	
	float vet1[10], vet2[10];
	int vet3[10];
	
	for(int i=0; i<10; i++) {

		printf("Informe um valor para o vetor 1:");
		scanf("%f", &vet1[i]);
	}
	
	for(int i=0; i<10; i++) {

		printf("Informe um valor para o vetor 2:");
		scanf("%f", &vet2[i]);
	}
	
	for(int i=0; i<10; i++){
		
		if(vet1[i]==vet2[i]){
			vet3[i] = 1;
		} else {
			vet3[i] = 0;
		}
	}
	
	printf("\nVetor 3:\n");
	
	for(int i=0; i<10; i++){
		printf("%d ", vet3[i]);
	}
}
