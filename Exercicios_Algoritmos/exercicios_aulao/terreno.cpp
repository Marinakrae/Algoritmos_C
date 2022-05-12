#include <stdio.h>

int main (void){
	
	float tam, valor;
	
	printf("Informe o tamanho do terreno: ");
	scanf("%f", &tam);
	
	printf("Informe o valor por metro de tela: ");
	scanf("%f", &valor);
	
	printf("O total gasto sera de %.2f", tam*valor);
	
}
