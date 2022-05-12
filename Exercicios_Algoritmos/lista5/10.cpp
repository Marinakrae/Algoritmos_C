#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	float m;
	
	printf("Informe um comprimento em metros: ");
	scanf("%f", &m);
	
	printf("%.2fm equivale a %.2f jardas \n", m, (m/0.91));
		
	system("pause");
}
