#include <stdio.h>

int main (void){
	
	int a, b, c;
	
	printf("Informe o valor de A: ");
	scanf("%d", &a);
	printf("Informe o valor de B: ");
	scanf("%d", &b);
	printf("Informe o valor de C: ");
	scanf("%d", &c);
	
	if((a+b)<c){
		printf("A soma de A + B eh menor que C");
	} else {
		printf("A soma de A + B nao eh menor que C");
	}
}
