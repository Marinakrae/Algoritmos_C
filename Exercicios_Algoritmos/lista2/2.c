//Desenvolva  um  algoritmo  que  leia  duas  notas  de  um  aluno  e  calcule  a  média  aritmética.
//Depois, apresente a mensagem “Aprovado”, caso a média seja maior ou igual a 7.0, ou “Reprovado” caso seja menor que 7.0

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	float n1, n2, media;

	printf("Insira a primeira nota: \n");
	scanf("%f", &n1);
	printf("Insira a segunda nota: \n");
	scanf("%f", &n2);

	media= (n1+n2)/2;

	if(media>=7.0) {
		printf("Aprovado \n");
	} else {
		printf ("Reprovado \n");
	}

	system("pause");
}
