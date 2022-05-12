#include <stdio.h>
#include <stdlib.h>

void Inserir(int *v){
	
	int contador=0;
	
	printf("Informe um numero maior que 0 (-1 para parar a execucao): \n");
	scanf("%d", &*(v+contador));
	
	if(*v != -1){ //posicao 0 
			do{
				contador++;
				v = (int*)realloc(v, sizeof(int)); //add mais uma posicao
				
				printf("Informe um valor: \n");
				scanf("%d", &*(v+contador)); //le mais um
				
			}while(*(v+contador) != -1); //testa dnv se a posicao inserida é -1
	}
	
	
	for(int i=0; i<contador; i++){
		printf("%d ", *(v+i));
	}
	
	free(v); //liberar a memoria alocada
}

int main (void){
	int *v;
	
	v = (int *)malloc(sizeof(int));
	
	Inserir(v);
}
