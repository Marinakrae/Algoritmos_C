#include <stdio.h>
#include <string.h>

int main (void) {
	
	char string[50], contraria[50];
	int cont=0;
	
	printf("Informe uma string: ");
	fgets(string, 50, stdin);
	
	strcpy(contraria, string);
	
	strrev(contraria);
	
	for (int i=0; i<(strlen(string))-1; i++){
		if (string[i] == contraria[i+1]){ // +1 por causa do \0

		} else {
			cont++; //add +1 caso n seja igual
		}
	}
	
	if (cont == 0){
		printf("Eh um palindromo! ");
	} else {
		printf("Nao eh um palindromo");
	}
		
}
