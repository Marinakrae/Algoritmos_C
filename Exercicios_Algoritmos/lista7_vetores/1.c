#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int vet[5];
	int i, j;
	
	for (i=0; i<5; i++){
		printf("Informe o valor da casa %d do vetor: ", i);
		scanf("%d", &vet[i]);
	}
	
	printf("\nVetor: \n");
	
	for (j=0; j<5; j++){
		printf("vet[%d]: %d\n", j, vet[j]);
	}
	
	system("pause");
}
