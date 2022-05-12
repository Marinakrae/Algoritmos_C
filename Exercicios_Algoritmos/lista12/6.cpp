#include <stdio.h>

int main (void) {
	
	int alt;
	
	float t, g, melhor_valor=0;
	
	for(int i=0; i<5; i++){
		
		printf("Informe a distancia percorrida: ");
		scanf("%d", &alt);
		
		printf("Informe o tempo levado para atingir o solo: ");
		scanf("%f", &t);
		
		//alt = 0.5 * g * (t*t);
		//69  = 0.5 * g * (3.74*3.74)
		//69  = 0.5 * g * 13.9876
		//69  = 6.9938 * g
		//g   = 9.86588120907089
		
		g = (alt/(t*t))/0.5;
				
		melhor_valor = melhor_valor + g;
	}
	
	printf("O melhor valor eh %.2f ", melhor_valor/5);
	
}
