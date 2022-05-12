#include <stdio.h>
#include <string.h>

int main (void) {

	char palavra[20], normal[20];
	int retorno, tam, cont=0;

	printf("Informe uma palavra: \n");
	fgets(palavra, 20, stdin);

	tam = strlen(palavra); //pega todas as casas +1

	strcpy(normal, palavra);

	strrev(palavra);
	
	tam--;

	for (int i=0; i<tam; i++) {
		if(palavra[i+1] == normal[i]) {

		} else {
			cont++;
		}
	}

	if (cont == 0) {
		printf("Eh um palindromo\n");
	} else {
		printf("Nao eh um palindromo\n");
	}

}
