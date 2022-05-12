#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int anos=0;
	float alt_ch=1.5, alt_ze=1.1;

	while (alt_ze<=alt_ch) { 

		alt_ch = alt_ch + 0.02;
		alt_ze = alt_ze + 0.03;
		
		anos++; //esse mais um
	}
	
	printf("Serao necessarios %d anos para que Ze seja maior que Chico \n", anos++);

	system("pause");
}
