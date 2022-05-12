#include <stdio.h>
#include <stdlib.h>

//Fac ¸a um programa que receba um n ´umero inteiro e verifique se este n ´umero ´e par ou ´impar.(sem utilizar o operador resto de divisão '%')

int main (void) {

	int n, para=0;

	printf("Informe um numero inteiro:\n");
	scanf("%d", &n);

	do {
		if (n>0) {
			n=n-2;
		} else if (n==0) {
			printf ("Eh par!\n");
			para=1;
		} else if (n<0) {
			printf ("Eh impar!\n");
			para=1;
		}
	} while (para==0);

	system("pause");
}
