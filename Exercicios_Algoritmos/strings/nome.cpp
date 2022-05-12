#include <stdio.h>
#include <string.h>

int main (void){
	
	char nome[50];
	
	printf("Insira seu nome: \n");
	fgets(nome, 50, stdin);
	
	printf("Seu nome: \n");
	puts(nome);
}
