#include <stdio.h>

int main (void) {
	
	int var=10;
	int *pVar  = &var;
	
	printf("Valor contido na var: %d\n", *pVar);
	
	printf("Conteudo das proximas 20 posicoes inteiras na memoria: \n");
	
	for(int i=1; i<=20; i++){
		printf("%d\n", *(pVar+i));
	}
}
