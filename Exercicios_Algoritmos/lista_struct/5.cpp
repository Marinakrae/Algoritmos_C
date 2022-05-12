#include <stdio.h>
#include <string.h>

struct entrevistado {
	char sexo;
	int idade;
	int qtd_livros;
};

int main (void){
	
	struct entrevistado e[20];
	int qtd_menores_10=0, qtd_mulh=0;
	float porce_n_leu=0;
	
	for(int i=0; i<20; i++){
		printf("\nSexo (m/f): ");
		scanf("%c", &e[i].sexo);
		getchar();
		printf("Idade: ");
		scanf("%d", &e[i].idade);
		
		printf("Quantidade de livros lidos em 2013: ");
		scanf("%d", &e[i].qtd_livros);
		
		if(e[i].idade < 10){
			qtd_menores_10 = qtd_menores_10 + e[i].qtd_livros;
		}
		
		if(e[i].sexo = 'f' && e[i].qtd_livros >= 5){
			qtd_mulh++;
		}
		
		if(e[i].qtd_livros == 0){ //20 - 100
			porce_n_leu++;       //porce - x
		}						//100*porce/20 = x
	}
	
	printf("\nQuantidade total de livros lidos pelos entrevistados menores de 10 anos: %d\n", qtd_menores_10);
	printf("Quantidade total de mulheres que leram 5 livros ou mais: %d\n", qtd_mulh);
	printf("Percentual de pessoas que nao leram livros: %.2f%\n", (100*porce_n_leu)/20); //c/20 * 100
}
