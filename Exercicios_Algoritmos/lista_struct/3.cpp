#include <stdio.h>
#include <string.h>

struct vendas {
	int codigo_vendedor;
	char nome_vendedor[50];
	int codigo_filial;
	float valor_venda;
};

//quantas vendas foram feitas?
//irei colocar 10 por padrão

int main (void) {

	struct vendas v[10];
	float total;

	printf("Cadastro das vendas: \n");

	for(int i=0; i<10; i++) {

		printf("\nCodigo do vendedor: ");
		scanf("%d", &v[i].codigo_vendedor);
		setbuf(stdin, NULL);
		printf("Nome do vendedor: ");
		fgets(v[i].nome_vendedor, 50, stdin);
		setbuf(stdin, NULL);
		printf("Codigo da filial: ");
		scanf("%d", &v[i].codigo_filial);

		printf("Valor de venda: ");
		scanf("%f", &v[i].valor_venda);
	}

	printf("\nTotal vendido por cada vendedor: \n");

	for(int i=1; i<=10; i++) { //cont cod vendedor
		
		total=0;
		
		for(int j=0; j<10; j++) { //cont vetor vendas
			if(v[j].codigo_vendedor == i) {
				total = total+v[j].valor_venda;
			}
		}
		
		printf("Total vendido pelo vendedor %d: R$%.2f \n", i, total);
	}
	
}
