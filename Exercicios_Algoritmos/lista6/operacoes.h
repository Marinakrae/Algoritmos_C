#define operacoes.h
#include <stdlib.h>
#include <stdio.h>

void pausa () {
	system("pause");
	system("cls");
}

void adicao (float n1, float n2) {
	printf("%.2f\n", n1+n2);
	pausa();
}

void subtracao (float n1, float n2) {
	printf("%.2f\n", n1-n2);
	pausa();
}

void multiplicacao (float n1, float n2) {
	printf("%.2f\n", n1*n2);
	pausa();
}

void divisao (float n1, float n2) {
	if(n2==0) {
		printf("Nao pode dividir por 0!\n");
	} else {
		printf("%.2f\n", n1/n2);
	}
	pausa();
}
