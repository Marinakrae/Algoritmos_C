//usando ponteiro, popule um vetor até que o numero -1 seja informado e depois apresente o vetor

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int *v, i, contador=0;
	
	//alocação dinamica de memoria
	
	//v = (int *)malloc(5*sizeof(int)); //alocando espaço de 5x o tamanho de um int na memoria
	
	//v = (int *)realloc(v,20 * sizeof(int)); //tamanho final redefinido para 20
	
	v = (int *)malloc(sizeof(int));
	
	
		printf("Informe um numero: \n");
		scanf("%d", &*(v+contador));
		
		if(*v != -1){
			do{
				contador++;
				v = (int*)realloc(v, sizeof(int));
				
				printf("Informe um valor: \n");
				scanf("%d", &*(v+contador));
			}while(*(v+contador) != -1);
		}
	
	
	for(i=0; i<contador; i++){
		printf("%d ", *(v+i));
	}
	
	free(v); //liberar a memoria alocada
}
