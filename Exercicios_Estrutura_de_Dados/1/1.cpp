#include <stdio.h>
#include <math.h>

int main (void) {
	
	int vet[30]; 
	float dp, media=0, potencia;
	
	for(int i=0; i<30; i++){
		
		printf("Informe um numero: ");
		scanf("%d", &vet[i]);
		
		media = media + vet[i];
	}
	
	media = media/30;
	
	//calculo dp
	
	//quadrado da distancia ate a media	
	
	for(int i=0; i<30; i++){
		
		potencia = pow(media - vet[i], 2);
		
		dp = dp + potencia;
	
	}
	
	dp = dp/30;
	
	printf("O Desvio Padrao eh: %f", sqrt(dp));
}
