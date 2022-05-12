#include <stdio.h>

int main(void){
	
	int idade=10;
	int *pIdade;
	pIdade = &idade;
	
	printf("conteudo da variavel idade: %d \n", idade);
	printf("endereco de memoria da var idade: %x\n", &idade);
	printf("endereco de memoria que tem na var pIdade: %x\n", pIdade);
	printf("conteudo apontado pelo ponteiro pIdade: %d\n", *pIdade);
}
