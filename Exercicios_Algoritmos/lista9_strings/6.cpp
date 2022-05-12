#include <stdio.h>
#include <string.h>

int main (void) {

	char string1[50], string2[50];
	int tam, cont1=0, cont2=0;

	printf("Informe a string 1: ");
	fgets(string1, 50, stdin);

	printf("Informe a string 2: ");
	fgets(string2, 50, stdin);

	printf("Strings em ordem alfabetica: \n");
	
	tam = strlen(string1);
	tam--;
	
	for (int i=0; i<tam; i++){
		if (string1[i]>string2[i]){
			cont1++;
		} else if (string1[i]<string2[i]) {
			cont2++;
		}
	}

	if (cont1>cont2) {
		puts (string2);
		puts (string1);
	} else {
		puts (string1);
		puts (string2);
	}

}
