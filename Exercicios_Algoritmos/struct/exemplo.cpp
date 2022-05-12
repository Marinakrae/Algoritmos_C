#include<stdio.h>
#include<string.h>

struct pessoa{
	char nome[10];
	char sexo;
	float altura;
	int idade;
	float peso;
};

int main (void) {
	struct pessoa A;
	
	fgets(A.nome, 10, stdin);
	scanf("%f", &A.altura);
	scanf("%d", &A.idade);
	scanf("%f", &A.peso);
	setbuf(stdin, NULL);
	scanf("%c", &A.sexo);
	
	puts(A.nome);
	printf("altura %.2f\n", A.altura);
	printf("idade %d \n", A.idade);
	printf("peso %.2f\n", A.peso);
	printf("sexo %c \n", A.sexo);
	
	getchar();
}
