#include <stdio.h>
#include <string.h>

int main (void){
	
	char nome[10];
	char sexo;
	char e_civil[7];
	int tempo;
	
	printf("Nome: ");
	fgets(nome, 10, stdin);
	setbuf(stdin, NULL);
	printf("Sexo: ");
	scanf("%c", &sexo);
	setbuf(stdin, NULL);
	printf("Estado civil: ");
	fgets(e_civil, 7, stdin);
	
	if(strcmp(e_civil, "casada")==0 && sexo=='f'){
		printf("Tempo de casada: ");
		scanf("%d", &tempo);
	}
}
