//Fazer  um algoritmo que leia a quantidade e o código do item pedido, e calcule o valor  a ser pago.
//Considere  que  em  cada  execução  somente  será  calculado  um tipo  de item.
// O  algoritmo  deve escrever a descrição do produto pedido, a quantidade, o valor unitárioe o total a ser pago.

#include<stdio.h>
#include<stdlib.h>

int main (void) {

	int cod, qtd;
	float valor_total;

	printf("Informe o codigo do item: \n");
	scanf("%d", &cod);

	printf("Informe a quantidade: \n");
	scanf("%d", &qtd);

	if(cod == 100) {
		printf("Descricao do produto: Cafe expresso pequeno \n");
		printf("Quantidade: %d \n", qtd);
		printf("Valor unitario: %.2f \n", 2.00);
		printf("Total a ser pago: %.2f \n", 2.00*qtd);
	} else if(cod == 101) {
		printf("Descricao do produto: Cafe expresso grande \n");
		printf("Quantidade: %d \n", qtd);
		printf("Valor unitario: %.2f \n", 3.00);
		printf("Total a ser pago: %.2f \n", 3.00*qtd);
	} else if(cod == 102) {
		printf("Descricao do produto: Cafe com leite pequeno \n");
		printf("Quantidade: %d \n", qtd);
		printf("Valor unitario: %.2f \n", 2.50);
		printf("Total a ser pago: %.2f \n", 2.50*qtd);
	} else if(cod == 103) {
		printf("Descricao do produto: Cafe com leite grande \n");
		printf("Quantidade: %d \n", qtd);
		printf("Valor unitario: %.2f \n", 3.50);
		printf("Total a ser pago: %.2f \n", 3.50*qtd);
	} else if(cod == 104) {
		printf("Descricao do produto: Agua sem gas (200 ml) \n");
		printf("Quantidade: %d \n", qtd);
		printf("Valor unitario: %.2f \n", 1.50);
		printf("Total a ser pago: %.2f \n", 1.50*qtd);
	} else if(cod == 105) {
		printf("Descricao do produto: Agua com gas (500 ml) \n");
		printf("Quantidade: %d \n", qtd);
		printf("Valor unitario: %.2f \n", 2.40);
		printf("Total a ser pago: %.2f \n", 2.40*qtd);
	}

	system("pause");
}
