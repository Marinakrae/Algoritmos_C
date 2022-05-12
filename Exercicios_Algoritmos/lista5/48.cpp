#include <stdio.h>
#include <stdlib.h>

int main (void) {

	char letra;  //um char na vdd é um codigo de caractere da tabela ascii. Ele converte para o simbolo correspondente se usarmos %c
	
	printf("Informe uma letra maiuscula: ");
	scanf("%c", &letra);
	
	//O intervalo entre os codigos de A e a na tabela é de 32.
	
	letra = letra+32;
		
	printf("Letra minuscula: %c \n", letra); 
	
	system("Pause");

}
