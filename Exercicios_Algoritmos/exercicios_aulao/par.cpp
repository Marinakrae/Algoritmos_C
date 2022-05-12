#include <stdio.h>

int main(void){
	
	int numero;
	
	printf("Informe um numero: \n");
	scanf("%d", &numero);
	
	if(numero%2 == 0){
		printf("Par \n");
	} else{
		printf("Impar \n");
	}
}
