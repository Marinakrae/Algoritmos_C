//Criar um algoritmo que leia um número inteiro e diga a qual mês do ano o mesmo corresponde.
// Se o valor for maior que doze ou menor que um, apresente uma mensagem informando que o valor não corresponde a nenhum mês.
// Ex.: 3 ?mês de março.

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int mes;

	printf("Digite um numero inteiro: \n");
	scanf("%d", &mes);

	if (mes==1) {
		printf("O numero corresponde ao mes de janeiro \n");
	} else if (mes==2) {
		printf("O numero corresponde ao mes de fevereiro \n");
	} else if (mes==3) {
		printf("O numero corresponde ao mes de março \n");
	} else if (mes==4) {
		printf("O numero corresponde ao mes de abril \n");
	} else if (mes==5) {
		printf("O numero corresponde ao mes de maio \n");
	} else if (mes==6) {
		printf("O numero corresponde ao mes de junho \n");
	} else if (mes==7) {
		printf("O numero corresponde ao mes de julho \n");
	} else if (mes==8) {
		printf("O numero corresponde ao mes de agosto \n");
	} else if (mes==9) {
		printf("O numero corresponde ao mes de setembro \n");
	} else if (mes==10) {
		printf("O numero corresponde ao mes de outubro \n");
	} else if (mes==11) {
		printf("O numero corresponde ao mes de novembro \n");
	} else if (mes==12) {
		printf("O numero corresponde ao mes de dezembro \n");
	} else {
		printf("O numero nao corresponde a nenhum mes \n");
	}

	system("pause");
}
