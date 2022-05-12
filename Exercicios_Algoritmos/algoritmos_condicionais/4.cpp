#include <stdio.h>
#include <string.h>

int main (void){
	
	int a, b, c;
	
	printf("Informe dois numeros: ");
	scanf("%d", &a);
	scanf("%d", &b);
	
	if(a==b){
		c = a+b;
		printf("C = %d", c);
	} else {
		c = a*b;
		printf("C = %d", c);
	}
}
