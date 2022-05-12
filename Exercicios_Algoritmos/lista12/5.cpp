#include <stdio.h>

int main (void) {
	
	float comp, lar, alt, qtd_az;
	
	printf("Informe o comprimento da cozinha: ");
	scanf("%f", &comp);
	
	printf("Informe a largura da cozinha: ");
	scanf("%f", &lar);
	
	printf("Informe a altura da cozinha: ");
	scanf("%f", &alt);
	
	qtd_az = (((comp*alt)*2) + ((lar*alt)*2)/1.5);
	
	printf("Serao necessarios %.2f azulejos", qtd_az);
}
