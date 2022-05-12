#include <stdio.h>
#include <string.h>

int main (void){
	
	float alt;
	char sex;
	
	printf("Altura: ");
	scanf("%f", &alt);
	
	setbuf(stdin, NULL);
	
	printf("Sexo: ");
	scanf("%c", &sex);
	
	if(sex == 'f'){
		printf("Peso ideal - %.2f", (62.1 * alt) - 44.7);
	} else {
		printf("Peso ideal - %.2f",  (72.7 * alt) - 58);
	}
	
}
