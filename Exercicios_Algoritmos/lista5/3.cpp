#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	float vel_kh;
	
	printf("Informe a velocidade em km/h: ");
	scanf("%f", &vel_kh);
		
	printf("A velocidade em m/s eh: %.2fm/s \n \n", vel_kh/3.6);
	
	system("pause");
}
