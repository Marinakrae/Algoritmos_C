#include <stdio.h>

int main (void){
	
	int vetA[6], vetB[6], vetC[6], vetD[6], j=0, k=0;
	
	for(int i=0; i<6; i++){
		
		printf("Informe um valor para o vetor A:");
		scanf("%d", &vetA[i]);
	}
	
	for(int i=0; i<6; i++){
		
		printf("Informe um valor para o vetor B:");
		scanf("%d", &vetB[i]);
	}
	
	for(int i=0; i<6; i++){
		
		if(i%2==0 || i==0){
			vetD[j] = vetA[i];
			vetD[j+1] = vetB[i];
			j = j+2;
		} else {
			vetC[k] = vetA[i];
			vetC[k+1] = vetB[i];
			k = k+2;
		}
	}
	
	printf("Vetor C:\n");
	
	for(int i=0; i<6; i++){
		printf("%d ", vetC[i]);
	}
	
	printf("\nVetor D:\n");
	
	for(int i=0; i<6; i++){
		printf("%d ", vetD[i]);
	}
}
