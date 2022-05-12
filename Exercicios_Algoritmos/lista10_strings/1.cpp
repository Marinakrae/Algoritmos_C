#include <stdio.h>
#include <string.h>

int main (void){
	
	char nome[30];
	
	printf("Insira o nome: ");
	fgets(nome, 30, stdin);
	
	for(int i=0; i<4; i++){
		
		printf("%c", nome[i]);
	}
}
