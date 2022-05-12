#include <stdio.h>
#include <string.h>

int main (void){
	
	char string[50];
	
	printf("Digit uma string: ");
	fgets(string, 50, stdin);
	
	printf("String de tras para frente: %s", strrev(string));
}
