#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	float dist, gaso;
	
	printf("Informe a distancia em km e a quantidade de litros de gasolina consumidos pelo carro: \n");
	scanf("%f %f", &dist, &gaso);
	
	if(dist/gaso < 8){
		printf("Venda o carro! \n");
	} else if (dist/gaso >= 8 && dist/gaso <= 14){
		printf("Economico! \n");
	} else if (dist/gaso > 12){
		printf("Super economico! \n");
	}
					
	system("pause");
}
