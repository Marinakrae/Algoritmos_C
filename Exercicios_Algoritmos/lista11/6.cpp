#include <stdio.h>
#include <string.h>

int main (void){
	
	char palavra[50], caractere;
	int cont_vogais=0;
	
	printf("Informe uma palavra: ");
	fgets(palavra, 50, stdin);
	
	for(int i=0; i<strlen(palavra); i++){
		if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o'|| palavra[i] == 'u'
		 || palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O'|| palavra[i] == 'U'){
		 	cont_vogais++;
		 }
	}
	
	printf("Essa palavra tem %d vogais \n", cont_vogais);
	
	printf("Informe um caractere: ");
	scanf("%c", &caractere);
	
	for(int i=0; i<strlen(palavra); i++){
		if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o'|| palavra[i] == 'u'
		 || palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O'|| palavra[i] == 'U'){
		 	palavra[i] = caractere;
		 }
	}
	
	printf("Palavra: %s", palavra);
}
