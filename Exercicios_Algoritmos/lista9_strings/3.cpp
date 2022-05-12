#include <stdio.h>
#include <string.h>

int main (void) {

	char nome[51], iniciais[5];
	int tam, cont_iniciais=0;

	printf("Informe um nome completo: \n");
	fgets(nome, 51, stdin);

	tam = strlen(nome);

	tam--;

	iniciais[0] = nome[0];
	cont_iniciais++;

	for (int i=0; i<tam; i++) {
		if(nome[i] == ' ') {
			iniciais[cont_iniciais] = nome[i+1];
			cont_iniciais++;
		}
	}

	printf("Iniciais de cada palavra: \n");

	for(int i=0; i<cont_iniciais; i++) {
		printf("%c ", iniciais[i]);
	}

}
