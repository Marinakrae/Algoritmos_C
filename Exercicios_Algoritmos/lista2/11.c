//Fazer um algoritmo que leia dois números e apresente-os em ordem crescente.

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	float n1, n2;

	printf("Insira dois numeros: \n");
	scanf("%f %f", &n1, &n2);

	if(n1>n2)
		printf("%.2f\n%.2f \n", n2, n1);
	else
		printf("%.2f\n%.2f \n", n1, n2);

	system("pause");
}
