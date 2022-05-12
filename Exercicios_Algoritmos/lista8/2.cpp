#include<stdio.h>

int main (void){
	
	int vet[10], num;
	
	printf("Informe um numero:");
	scanf("%d", &num);
	
	for(int i=1; i<=10; i++){
		
		vet[i-1] = num*i;
	}
	
	printf("Tabuada de %d: \n", num);
	
	for(int i=0; i<10; i++){
		
		printf("%d\n", vet[i]);
		
	}
}
