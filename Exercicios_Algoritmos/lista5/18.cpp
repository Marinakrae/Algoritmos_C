#include <stdio.h>

/* Escreva um programa que leia um n ´umero inteiro maior do que zero e devolva, na tela, asoma de todos os seus algarismos.
Por exemplo, ao n ´umero 251 corresponder ´a o valor8 (2 + 5 + 1).  Se o n ´umero lido n ~ao for maior do que zero, o programa
terminar ´a com amensagem “N ´umero inv ´alido”. */

int main (void) {

	int n, resto, soma, mil=0, cent=0, dez=0, un=0;

	printf("Informe um numero inteiro maior do que zero: (ate 10000)\n");
	scanf("%d", &n);

	if ( n > 9 && n < 100) {
		dez = n/10;
		un = n%10;
		soma = cent + dez + un;
	} else if ( n > 99 && n < 1000) {
		cent = n/100;
		dez = (n%100)/10;
		un = n%10;
		soma = cent + dez + un;
	} else if ( n > 999 && n < 10000) {
		mil = n/1000;
		cent = (n%1000)/100;
		dez = (cent*10)/10;
		un = dez%10;
		soma = mil+ cent + dez + un;
	} else {
		printf ("Numero invalido! \n");
	}

	printf("A soma dos algarismos eh %d\n", soma);
}

