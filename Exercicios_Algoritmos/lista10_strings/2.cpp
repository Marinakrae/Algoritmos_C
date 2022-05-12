#include <stdio.h>
#include <string.h>

int main (void){
	
	char nome[50], sexo;
	int idade;
	
	printf("Insira o nome: ");
	fgets(nome, 50, stdin);
	
	printf("Insira o sexo (m ou f): ");
	scanf("%c", &sexo);
	
	printf("Insira a idade: ");
	scanf("%d", &idade);
	
	if(sexo=='f' && idade<25){
		printf("%sACEITA", nome);
	} else {
		printf("NAO ACEITA");
	}
}
