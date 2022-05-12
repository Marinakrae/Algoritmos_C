#include <stdio.h>
#include <string.h>

int main (void){
	
	int n;
	
	printf("Informe um numero: ");
	scanf("%d", &n);
	
	if(n%2==0){
		printf("Eh par");
	} else {
		printf("Eh impar");
	}
}
