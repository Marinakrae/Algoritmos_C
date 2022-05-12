//Fazer  um  algoritmo  que  leia  um  número  inteiro,  verifique  e  escreva  se  ele  e  negativo,
//  zero  ou positivo. Caso seja positivo diga ainda se ele e par ou impar

#include<stdio.h>
#include<stdlib.h>

int main (void) {

	int n;

	printf("Insira um numero inteiro: \n");
	scanf("%d", &n);

	if (n < 0) {
		printf("O numero eh negativo \n");
	} else if (n > 0) {
		if (n%2==0)
			printf("O numero eh positivo e par \n");
		else
			printf("O numero eh positivo e impar \n");
	} else {
		printf("O numero eh zero \n");
	}

	system("pause");
}
