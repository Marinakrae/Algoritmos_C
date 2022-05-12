#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

struct acoes {
	char nome_companhia[50];
	char area_atuacao[20];
	float valor_atual;
	float valor_anterior;
	double valor_porcentagem;
};

int main (void){
	
	struct acoes a[3];
	float valor;
	
	for(int i=0; i<3; i++){
		setbuf(stdin, NULL);
		printf("Nome da companhia: ");
		fgets(a[i].nome_companhia, 50, stdin);
		setbuf(stdin, NULL);
		printf("Area de atuacao: ");
		fgets(a[i].area_atuacao, 20, stdin);
		setbuf(stdin, NULL);
		printf("Valor atual: ");
		scanf("%f", &a[i].valor_atual);
		printf("Valor anterior: ");
		scanf("%f", &a[i].valor_anterior);
		printf("Variacao da acao em porcentagem: ");
		scanf("%lf", &a[i].valor_porcentagem);
	}
	
	printf("\nInforme um valor de acao: ");
	scanf("%f", &valor);
	
	printf("");
	
	for(int i=0; i<3; i++){
		if(a[i].valor_atual < valor){
			printf("\n\nNome da companhia: %s", a[i].nome_companhia);
			printf("Area de atuacao da companhia: %s", a[i].area_atuacao);
			printf("Valor atual da acao: R$%.2f\n", a[i].valor_atual);
			printf("Valor anterior: R$%.2f\n", a[i].valor_anterior);
			printf("Variacao da acao: %.2lf", a[i].valor_porcentagem);
		}
		
	}
	
} 
