#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int dias;
	
	printf("Informe o numero de dias trabalhados pelo encanador: ");
	scanf("%d", &dias);
	
	printf("A quantia liquida a ser paga eh R$%.2f \n", (30.00*dias)-((30.00*dias)*0.08));

	system("Pause");

}
