#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	float ang_g;
	
	printf("Informe aum angulo em graus: ");
	scanf("%f", &ang_g);
	
	printf("O angulo em radianos eh: %.2fR \n \n", ang_g*3.14/180);
	
	system("pause");
}
