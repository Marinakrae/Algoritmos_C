#include <stdio.h>

struct aluno {
	char nome[50];
	float nota1;
	float nota2;
	float media;
};

int main (void){
	
	struct aluno a;
	
	printf("Informe o nome do aluno: ");
	fgets(a.nome, 50, stdin);
	
	printf("Nota 1:");
	scanf("%f", &a.nota1);
	
	printf("Nota 2:");
	scanf("%f", &a.nota2);
	
	printf("\nAluno: %s", a.nome);
	printf("Notas: %.2f e %.2f \n", a.nota1, a.nota2);
	printf("Media final: %.2f \n", (a.nota1+a.nota2)/2);
	
}
