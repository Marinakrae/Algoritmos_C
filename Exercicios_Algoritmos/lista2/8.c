//Escreva um algoritmo que leia uma letra e imprima uma mensagem dizendo se é vogal ou não.

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	char letra;

	printf("Insira uma letra: \n");
	scanf("%c", &letra);

	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'
	 || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
		printf("A letra informada eh vogal. \n");
	} else {
		printf("A letra informada nao eh vogal. \n");
	}

	system("pause");
}
