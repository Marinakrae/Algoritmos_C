#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	float temp_K, temp_C;
	
	printf("Informe a temperatura em graus Kelvin: ");
	scanf("%f", &temp_K);
	
	temp_C = temp_K-273.15;
	
	printf("A temperatura em Celsius eh: %.2fC \n \n", temp_C);
	
	system("pause");
}
