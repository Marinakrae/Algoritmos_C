#include <stdio.h>

int main (void){
	
	float preco_normal, preco_final;
	int condicao;
	
	printf("Informe o preco normal de etiqueta: ");
	scanf("%f", &preco_normal);
	
	printf("Escolha a condicao de pagamento: \n");
	printf("1 - A vista em dinheiro ou cheque\n2 - A vista no cartão de credito\n3 - Em duas vezes\n4 - Em tres vezes\n\n");
	scanf("%d", &condicao);
	
	switch (condicao){
		case 1:{
			preco_final = preco_normal*0.9;
			break;
		} 
		case 2:{
			preco_final = preco_normal*0.85;
			break;
		}
		case 3:{
			preco_final = preco_normal;
			break;
		}
		case 4:{
			preco_final = preco_normal*1.1;
			break;
		}
		default:{
			printf("Opcao invalida!");
			break;
		}
	}
	
	printf("\nPreco final: R$%.2f ", preco_final);
}
