#include <stdio.h>
#include <string.h>

struct pessoa {
	char nome[50];
	char endereco[100];
	char email[30];
};

int main (void) {
	
	struct pessoa p;
	
	printf("Informe o nome: ");
	fgets(p.nome, 50, stdin);
	
	printf("Informe o endereco: ");
	fgets(p.endereco, 50, stdin);
	
	printf("Informe o email: ");
	fgets(p.email, 30, stdin);
	
	printf("\nNome: %s", p.nome);
	printf("Endereco: %s", p.endereco);
	printf("Email: %s ", p.email);
}
