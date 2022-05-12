/* Faça um programa que leia um valor n ecrie dinamicamente um vetor de n elementos e  passe  esse  vetor  para  uma  função
 que  vai  ler  os  elementos  desse  vetor.  Depois,  no programa  principal,  o  vetor  preenchido  deve  ser  impresso. 
 Além  disso,  antes  de finalizar o programa, deve-se liberar a área de memória alocada. */
 
#include <stdio.h>
#include <stdlib.h>

void Ler_elementos(int *vet, int n){
	
	int cont=0;
	
	for(int i=0; i<n; i++){
		
		printf("Informe um valor: ");
		scanf("%d", &*(vet+cont)); 
	
		cont++;
	}

}

int main (void){
	
	int n, *vet;
	
	printf("Informe um numero: ");
	scanf("%d", &n);
	
	vet = (int *)malloc(sizeof(n));
	
	Ler_elementos(vet, n);
	
	for(int i=0; i<n; i++){
		printf("%d", *(vet+i));
	}
	
	free(vet);
}
