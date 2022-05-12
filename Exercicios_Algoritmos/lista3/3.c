//Implemente um programa que leia o código do item pedido, a quantidade e calcule o valor a serpago por aquele lanche.
//Considere que a cada execução somente será calculado um item.

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int cod, qtd;
	
	printf("----------------CARDAPIO:--------------\n");
	printf("Especificacao \t Codigo \t Preco \n");
	printf("Cachorro quente   100 \t \t R$1.20 \n");
	printf("Bauru simples \t  101 \t \t R$1.30 \n");
	printf("Bauru com ovo \t  102 \t \t R$1.50 \n");
	printf("Hamburger \t  103 \t \t R$1.20 \n");
	printf("Cheeseburguer \t  104 \t \t R$1.30 \n");
	printf("Refrigerante \t  105 \t \t R$1.00 \n");
	printf("-------------------------------------- \n");
	
	printf("Informe o codigo do pedido: \n");
	scanf("%d", &cod);
	printf("Informe a quantidade do pedido: \n");
	scanf("%d", &qtd);
	
	switch(cod){
		
		case 100:{
			printf("Cachorro quente \n");
			printf("Valor total: R$%.2f \n", 1.2*qtd);
			break;
		}
		case 101:{
			printf("Bauru simples \n");
			printf("Valor total: R$%.2f \n", 1.3*qtd);
			break;
		}
		case 102:{
			printf("Bauru com ovo \n");
			printf("Valor total: R$%.2f \n", 1.5*qtd);
			break;
		}
		case 103:{
			printf("Hamburguer \n");
			printf("Valor total: R$%.2f \n", 1.2*qtd);
			break;
		}
		case 104:{
			printf("Cheeseburguer \n");
			printf("Valor total: R$%.2f \n", 1.3*qtd);
			break;
		}
		case 105:{
			printf("Refrigerante \n");
			printf("Valor total: R$%.2f \n", 1*qtd);
			break;
		}
	}
	
	system("pause");
}
