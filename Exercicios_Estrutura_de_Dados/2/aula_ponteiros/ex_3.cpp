#include <stdio.h>

int main (void){
	
	int num;
	int *pNum;
	pNum = &num;
	
	printf("Informe um numero maior que 1: \n");
	scanf("%d", &num);
	
	*pNum = 1;
	
	printf("variavel num tem conteudo : %d\n", *pNum);
	printf("*pNum : %d\n", *pNum);
}
