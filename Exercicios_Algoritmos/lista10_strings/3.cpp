#include <stdio.h>
#include <string.h>

int main (void){
	
	char nome[50];
	
	printf("Informe um nome: ");
	fgets(nome, 50, stdin);
	
	printf("O nome tem %d letras", strlen(nome)-1);
}
