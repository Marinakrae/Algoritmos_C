#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	float m;
	
	printf("Informe um valor de area em metros quadrados: ");
	scanf("%f", &m);
	
	printf("%.2fm2 equivale a %.2f acres \n", m, (m*0.000247));
		
	system("pause");
}
