#include <stdio.h>

int Tabuada (int *n){
	
	int *pN, vet[10];
	
	pN = vet;
	
	for(int i=1; i<=10; i++){
		*pN = (*n)*i;
		
		printf("%d\n", *pN);
	}
	
}

int main (void) {
	
	int n;
	
	printf("Informe um numero: ");
	scanf("%d", &n);
	
	Tabuada(&n);
}
