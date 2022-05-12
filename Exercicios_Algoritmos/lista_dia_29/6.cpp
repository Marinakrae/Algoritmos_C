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
	
	struct acoes a[5], aux[1];
	int cont=0; //guarda quando algo no vetor eh mudado
	
	for(int i=0; i<5; i++){
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
		
	for(int i=0; i<5; i++){
		if(a[i].valor_atual > a[i+1].valor_atual && (i+1) < 5){ 
			
			strcpy(aux[0].nome_companhia, a[i].nome_companhia);
			strcpy(aux[0].area_atuacao,a[i].area_atuacao);
			aux[0].valor_atual = a[i].valor_atual;
			aux[0].valor_anterior = a[i].valor_anterior;
			aux[0].valor_porcentagem = a[i].valor_porcentagem;
			
			strcpy(a[i].nome_companhia,a[i+1].nome_companhia);
			strcpy(a[i].area_atuacao,a[i+1].area_atuacao);
			a[i].valor_atual = a[i+1].valor_atual;
			a[i].valor_anterior = a[i+1].valor_anterior;
			a[i].valor_porcentagem = a[i+1].valor_porcentagem;
			
			
			strcpy(a[i+1].nome_companhia,aux[0].nome_companhia);
			strcpy(a[i+1].area_atuacao, aux[0].area_atuacao);
			a[i+1].valor_atual = aux[0].valor_atual;
			a[i+1].valor_anterior = aux[0].valor_anterior;
			a[i+1].valor_porcentagem = aux[0].valor_porcentagem;
			
			i = -1;
		}

	}
	
	printf("\n\n");
	
	for(int i=0; i<5; i++){
		printf("\n\nNome da companhia: %s", a[i].nome_companhia);
		printf("Area de atuacao da companhia: %s", a[i].area_atuacao);
		printf("Valor atual da acao: R$%.2f\n", a[i].valor_atual);
		printf("Valor anterior: R$%.2f\n", a[i].valor_anterior);
		printf("Variacao da acao: %.2lf", a[i].valor_porcentagem);
	}
	
}
