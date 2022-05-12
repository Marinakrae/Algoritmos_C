#include <stdio.h>
#include <string.h>

struct alunos {
	char nome[20];
	int idade;
};

int main (void) {

	struct alunos a[10];
	struct alunos a_aux;
	int i;

	for(int i=0; i<10; i++) {
		setbuf(stdin, NULL);
		printf("Digite o nome: ");
		fgets(a[i].nome, 20, stdin);
		setbuf(stdin, NULL);
		printf("Digite a idade: ");
		scanf("%d", &a[i].idade);
	}

	//usar o strcmp entre todas
	
	i=0;
	while(i<10) {

		setbuf(stdin, NULL);
		
		if(strcmp(a[i].nome, a[i+1].nome) > 0) {  //o primeiro deve passar pra tras na lista
			a_aux.idade = a[i].idade;
			strcpy(a_aux.nome, a[i].nome);

			a[i].idade = a[i+1].idade;
			strcpy(a[i].nome, a[i+1].nome);

			a[i+1].idade = a_aux.idade;
			strcpy(a[i+1].nome, a_aux.nome);

			i=-1; //para ele voltar a 0 dnv e começar a comparar do começo
		}

		i++; //se estiver td certo ele add +1. Quando chegar a 10, vai parar o while 

	}

	for(int i=0; i<10; i++) {
		printf("Nome: %s", a[i].nome);
		printf("Idade: %d \n", a[i].idade);
	}
	
	getchar();
}
