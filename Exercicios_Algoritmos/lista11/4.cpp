#include <stdio.h>
#include <string.h>

int main (void) {
	
	char nome[50], iniciais[10], cont_iniciais=0;
	
	printf("Informe um nome completo: ");
	fgets(nome, 50, stdin);
	
	iniciais[0] = nome[0];
	cont_iniciais++;
	
	for(int i=1; i<=strlen(nome); i++){
		if(nome[i] == ' '){
			iniciais[cont_iniciais] = nome[i+1];
			cont_iniciais++;
		}
	}
	
	printf("Iniciais: ");
	
	for(int i=0; i<strlen(iniciais); i++){
		printf("%c ", iniciais[i]);
	}
}
