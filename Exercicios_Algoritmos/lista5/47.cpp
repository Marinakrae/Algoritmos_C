#include <stdio.h>
#include <stdlib.h>

int main (void) {

	float valor;
	
	printf("Informe um valor: \n");
	scanf("%f", &valor);
	
 	printf("Total a pagar com desconto de 10 por cento: R$%.2f \n", valor*0.9);
 	printf("Valor da parcela em 3x sem juros: R$%.2f \n", valor/3);
 	printf("Comissao do vendedor caso a venda seja a vista: R$%.2f \n", (valor*0.9)*0.05);
 	printf("Comissao do vendedor caso a venda seja parcelada: R$%.2f \n", valor*0.05);
 	
 	system("Pause");

}
