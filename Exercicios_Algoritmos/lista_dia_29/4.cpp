#include <stdio.h>
#include <string.h>
#include<math.h>

struct acoes {
	char nome_companhia[50];
	char area_atuacao[20];
	float valor_atual;
	float valor_anterior;
	double valor_porcentagem;
};

int main (void){
	
	struct acoes a[3];
	float media=0, variacao=0;
	
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
	
	for(int i=0; i<3; i++){
		media = media + a[i].valor_atual;
		variacao = variacao + a[i].valor_porcentagem;
	}
	
	printf("Media dos valores de todas as acoes: %.2f\n", media/3);
	
	printf("Desvio padrao do valor de todas as acoes: %.2lf\n", sqrt(variacao));
}
