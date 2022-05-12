#include <stdio.h>

int main (void){
	
	int vet[10];
	
	for(int i=0; i<10; i++){
		
		printf("Informe um valor:");
		scanf("%d", &vet[i]);
	}
	
	int aux = vet[0];
	
	for(int i=0; i<10; i++){
		
		vet[i] = vet[i+1];
	}
	
	vet[9] = aux;
	
	printf("Vetor:\n");
	
	for(int i=0; i<10; i++){
		printf("%d ", vet[i]);
	}
}
