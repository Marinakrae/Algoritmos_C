#include <stdio.h>
#include <string.h>

int main (void) {
	
	char string1[50], string2[50];
	int retorno;
	
	printf("Informe uma string: ");
	fgets(string1, 50, stdin);
	
	printf("Informe outra string: ");
	fgets(string2, 50, stdin);
	
	printf("Strings em ordem alfabetica: \n");
	
	retorno = strcmp(string1, string2); 
	
	//se o retorno for >0 a primeira tem valor maior, ou seja, seus caracteres vêm depois alfabeticamente
	
	if(retorno > 0){
		puts(string2);
		puts(string1);
	} else {
		puts(string2);
		puts(string1);
	}
}
