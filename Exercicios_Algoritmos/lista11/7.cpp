#include <stdio.h>

int main (void) {
	
	int A[50], N, B[50], fat;
	
	printf("Informe quantos elementos devera ter o vetor: ");
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		printf("Informe um valor para a[%d]: ", i);
		scanf("%d", &A[i]);
		
		//atribuir a B[i] o fatorial de A[i]
		
		fat = 1;
		
		for(int j=A[i]; j>1; j--){
			fat = fat * j;
		}
		
		B[i] = fat;
	}
	
	printf("Vetor A: \n");
	
	for(int i=0; i<N; i++){
		printf("%d ", A[i]);
	}
	
	printf(" \nVetor B: \n");
	
	for(int i=0; i<N; i++){
		printf("%d ", B[i]);
	}
}
