#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Modifica (char string[50]){
	
	for(int i=0; i<strlen(string); i++){
		if(i%2==0){
			string[i] = toupper(string[i]);
		}
	}
	
	printf("String alternada: ");
	
	for(int i=0; i<strlen(string); i++){
		printf("%c", string[i]);
	}
}

int main (void){
	
	char string[50];
	
	printf("Digite uma palavra: ");
	fgets(string, 50, stdin);
	
	Modifica(string);
}
