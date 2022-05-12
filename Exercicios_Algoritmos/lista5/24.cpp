#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int ano;
	
	printf("Informe um ano: \n");
	scanf("%d", &ano);
	
	if(ano%400==0 || (ano%4==0 && ano%100!=0)){
		printf("Eh bissexto \n");
	} else {
		printf("Nao eh bissexto \n");
	}
					
	system("pause");
}
