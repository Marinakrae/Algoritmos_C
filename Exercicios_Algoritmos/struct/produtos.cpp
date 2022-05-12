#include <stdio.h>
#include <string.h>

struct produto {
	int codigo;
	char nome[10];
	float preco_normal;
	float preco_estudante;
};

int main (void) {
	
	struct produto p[5];
	
	printf("Insira as informacoes dos produtos: \n");
	
	for(int i=0; i<1; i++){
		printf("Codigo: ");
		scanf("%d", &p[i].codigo);
		printf("Nome: ");
		setbuf(stdin, NULL);
		fgets(p[i].nome, 10, stdin);
		setbuf(stdin, NULL);
		printf("Preco: ");
		scanf("%f", &p[i].preco_normal);
		
		p[i].preco_estudante = (p[i].preco_normal/2);
	}
	
	printf("\n\nProdutos: \n");
	
	for(int i=0; i<1; i++){
		printf("\n\nProduto %d: \n", i);
		printf("Codigo: %d\n", p[i].codigo);
		printf("Nome: %s", p[i].nome);
		printf("Preco normal: %.2f\n", p[i].preco_normal);
		printf("Preco para estudante: %.2f\n", p[i].preco_estudante);
	}
	
}
