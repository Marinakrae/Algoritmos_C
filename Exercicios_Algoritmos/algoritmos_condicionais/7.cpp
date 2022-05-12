#include <stdio.h>
#include <string.h>

int main (void){
	
	int n;
	
	printf("Informe um numero: ");
	scanf("%d", &n);
	
	if(n%2==0){
		n = n+5;
		printf("N = %d", n);
	} else {
		n = n+8;
		printf("N = %d", n);
	}
}
