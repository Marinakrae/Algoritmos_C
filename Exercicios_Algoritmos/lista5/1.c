#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	float temp_C, temp_F;
	
	printf("Informe a temperatura em graus Celsius: ");
	scanf("%f", &temp_C);
	
	temp_F = (temp_C*(9.0/5.0)+32.0);
	
	printf("A temperatura em Fahrenheit eh: %.2fF \n \n", temp_F);
	
	system("pause");
}
