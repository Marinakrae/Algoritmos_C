#include <stdio.h>
#include <string.h>

char* strrev(char *texto) {
	int length = strlen(texto)-2;
	int c, i, j = 0;
	for (i = length; i >= length/2; i--, j++) {
		c = texto[i];
		texto[i] = texto[j];
		texto[j] = c;
	}
}


int main(void) {

	char palavra[10], invertida[10], aux;
	int tamanho, i, j=0;

	fgets(palavra, 50, stdin);
//copia
	strcpy(invertida,palavra);

//inverter
	strrev(invertida);


	if(strcmp(palavra,invertida) == 0) {
		printf("palindrome");
	} else {
		printf("nao palindrome");
	}

}
