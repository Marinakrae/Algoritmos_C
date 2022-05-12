#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int A[7], B[7], i, j;
	
	for (i=0; i<7; i++){
		printf("Vetor A[%d]: ", i);
		scanf("%d", &A[i]);
		B[i] = A[i];
	}
	
	printf("\nVetor B: \n");
	
	for (j=0; j<7; j++){
		printf("B[%d]: %d\n", j, B[j]);
	}
	
	system("pause");
}
