#include <stdio.h>
#include <stdlib.h>

int Retorna_ponteiro(int n){
	
	int *v;
	
	v = (int *)malloc(n * sizeof(int));
	
	return *v;
}

void Imprime_vetor(int *pont, int nm){
	
	int *vet;
	
	vet = pont;
	
	for(int i=0; i<nm; i++){
		
		printf("%d", *(vet+i));
	}
}

void Libera_memoria(int *pont){
	
	int *vet;
	
	vet = pont;
	
	free(vet);
}

int main (void){
	
	int n, nm, *vetor;
	
	printf("Informe um numero: ");
	scanf("%d", &n);
	
	vetor = Retorna_ponteiro(n);
	
	printf("Informe os n elementos do vetor que deseja imprimir: ");
	scanf("%d", &nm);
	
	Imprime_vetor(vetor, nm);
	
	Libera_memoria(vetor);
}
