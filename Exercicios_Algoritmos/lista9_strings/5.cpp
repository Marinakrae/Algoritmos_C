#include <stdio.h>
#include <string.h>

void Criptografar (char string[], int posicoes) {

	char criptografada[50];
	int tam, resultado;

	tam = strlen(string);
	tam--;

	for (int i=0; i<tam; i++) {
		//Tratamento

		if((string[i] + posicoes)>122) {
			resultado = ((string[i] + posicoes) - 122) + 96;
		} else {
			resultado = string[i]+posicoes;
		}

		criptografada[i] = resultado;
	}

	printf("String criptografada: \n");
	puts(criptografada);

}

void Descriptografar (char string[], int posicoes) {

	char descriptografada[50];
	int tam, resultado;

	tam = strlen(string);
	tam--;

	for (int i=0; i<tam; i++) {
		
		if((string[i]-posicoes)<97) {
			resultado = ((string[i]-posicoes) + 122) - 96;
		} else {
			resultado = string[i]-posicoes;
		}

		descriptografada[i] = resultado;
		
	}

	printf("String descriptografada: \n");
	puts(descriptografada);

}

int main (void) {

	char string[50];
	int posicoes, opcao;

	printf("Informe uma string: \n");
	fgets(string, 50, stdin);

	printf("Informe o numero de posicoes: \n");
	scanf("%d", &posicoes);

	printf("Selecione uma opcao \n 1) Criptografia \n 2) Descriptografia: \n");
	scanf("%d", &opcao);

	if (opcao==1) {

		Criptografar(string, posicoes);

	} else if (opcao==2) {

		Descriptografar(string, posicoes);

	} else {
		printf("Opcao invalida!\n");
	}


}


