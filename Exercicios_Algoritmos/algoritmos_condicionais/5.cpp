#include <stdio.h>
#include <string.h>

int main (void){
	
	int n;
	
	printf("Informe um numero: ");
	scanf("%d", &n);
	
	if(n>0){
		printf("Dobro = %d", n*2);
	} else {
		printf("Triplo = %d", n*3);
	}
}
