#include <stdio.h>
#include <string.h>

struct pessoa {
	char nome[20];
	char sexo;
	int idade;
};

int main (void) {
	
	struct pessoa p[10];
	char sexo;
	
	for(int i=0; i<1; i++){
		
		printf("Nome: ");
		setbuf(stdin, NULL);
		fgets(p[i].nome, 20, stdin);
		setbuf(stdin, NULL);
		printf("Sexo: ");
		scanf("%c", &p[i].sexo);
		setbuf(stdin, NULL);
        printf("Idade: ");
		scanf("%d", &p[i].idade);
	}
	
	setbuf(stdin, NULL);
	printf("\nDigite um sexo: ");
	scanf("%c", &sexo);
	getchar();
	
	for(int i=0; i<10; i++){
		
		if(p[i].sexo == sexo){
			
			printf("\nNome: %s", p[i].nome);
			
			printf("Idade: %d", p[i].idade);
		}
	}
}
