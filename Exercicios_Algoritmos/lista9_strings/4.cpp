#include <stdio.h>
#include <string.h>

int main (void){
	
	char palavra[21], letra;
	int cont_vogais=0, tam;
	
	printf("Insira uma palavra: ");
	fgets(palavra, 21, stdin);
	
	tam = (strlen(palavra)-1);
	
	for (int i=0; i<tam; i++){
		if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' ||
		   palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U'){
		   		cont_vogais++;
		   }
	}
	
	printf("A palavra possui %d vogais \n", cont_vogais);
	
	printf("Entre com uma letra para substituir as vogais da palavra: ");
	scanf("%c", &letra);
	
	for (int i=0; i<tam; i++){
		if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' ||
		   palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U'){
		   		palavra[i] = letra;
		   }
	}
	
	printf("Nova palavra: \n");
	
	for (int i=0; i<tam; i++){
		printf("%c ", palavra[i]);
	}
	
}
