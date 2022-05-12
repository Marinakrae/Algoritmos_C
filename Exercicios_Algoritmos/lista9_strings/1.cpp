#include <stdio.h>
#include <string.h>

void Inverte_String(char palavra[]){
	
	printf("Palavra invertida: %s \n", strrev(palavra));
	
}

int main (void){
	
	char palavra[20];
	
	printf("Informe uma palavra: \n");
	fgets(palavra, 20, stdin);
	
	Inverte_String(palavra);
}
