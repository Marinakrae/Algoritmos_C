#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	float alt, r;
	
	printf("Informe a altura e o raio de um cilindro circular:\n");
	scanf("%f %f", &alt, &r);
	
	printf("O volume do cilindro eh %.2f \n",3.141592*(r*r)*alt);
		
	system("pause");
}
