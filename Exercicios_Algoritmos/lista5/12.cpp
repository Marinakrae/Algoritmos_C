#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	float r;
	
	printf("Informe um valor do raio de um circulo: ");
	scanf("%f", &r);
	
	printf("A area do circulo eh %.2f \n", 3.141592*(r*r));
	
	system("pause");
}
