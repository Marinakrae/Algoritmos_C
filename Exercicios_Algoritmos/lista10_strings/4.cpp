#include <stdio.h>
#include <string.h>

int main (void){
	
	char nome[50];
	
	printf("Insira um nome: ");
	fgets(nome, 50, stdin);
	
	if(nome[0]=='a' || nome[0]=='A'){
		puts(nome);
	}
}
