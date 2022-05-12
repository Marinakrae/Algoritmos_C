#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Calcula_potencia (){
	int x, y;
	printf("Informe a base e o expoente: \n");
	scanf("%d %d", &x, &y);
	printf("Potencia (%d,%d)= %.2f \n", x, y, pow(x,y));
}

int main (void){
		
	Calcula_potencia();
	
	system("pause");
}
