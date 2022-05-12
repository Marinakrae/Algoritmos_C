#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	float vol, lit;
	
	printf("Informe um volume em metros cubicos: ");
	scanf("%f", &vol);
	
	lit = 1000*vol;
	
	printf("O volume em litros eh: %.2fL \n \n", lit);
	
	system("pause");
}
