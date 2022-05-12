#include<stdio.h>

int main (void){
	
	int vetA[5], vetB[5];
	
	for(int i=0; i<5; i++){
		
		printf("Informe um valor:");
		scanf("%d", &vetA[i]);
		
		vetB[i] = vetA[i];
	}
	
	printf("Vetor B: \n");
	
	for(int i=0; i<5; i++){
		
		printf("%d ", vetB[i]);
		
	}
}
