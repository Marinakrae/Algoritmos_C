#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	float sal, pres;
	
	printf("Informe o salario do trabalhador:\n");
	scanf("%f", &sal);
	
	printf("Informe o valor da prestacao do emprestimo:\n");
	scanf("%f", &pres);
	
	if (pres > (sal*0.2)){
		printf("Emprestimo nao concedido\n");
	} else {
		printf("Emprestimo concedido\n");
	}
			
	system("pause");
}
