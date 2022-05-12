#include <stdio.h>
#include <string.h>
#include <math.h>

int main (void) {

	char binario[9];
	int decimal=0;

	printf("Informe um numero binario de 8 digitos: ");
	fgets(binario, 9, stdin);

	int tamanho = strlen(binario);
	
	strrev(binario); //inversao da string

	for(int i=0; i<tamanho; i++) {
		int num;
		num = (int)binario[i];
		if(num == 49) {
			num = 1;
		} else {
			num = 0;
		}

		decimal = decimal + num * (pow(2,(i)));
	}

	printf("Decimal: %d\n", decimal);
}
