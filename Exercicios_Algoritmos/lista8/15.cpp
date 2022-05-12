#include <stdio.h>

int main (void){
	
	int n_cheques;
	float maior=0, menor=999999999, soma=0;
	
	printf("Informe quantos cheques foram usados (maximo 30):");
	scanf("%d", &n_cheques);
	
	float vet_valores[n_cheques];
	
	for(int i=0; i<n_cheques; i++){
				
		printf("Informe o valor gasto em cheque: \n");
		scanf("%f", &vet_valores[i]);
		soma = soma + vet_valores[i];
		
		if(vet_valores[i] > maior){
			maior = vet_valores[i];
		}
		
		if(vet_valores[i] < menor){
			menor = vet_valores[i];
		}
	}
	
	printf("Lista com todos os valores:\n");
	
	for(int i=0; i<n_cheques; i++){
		printf("%.2f ", vet_valores[i]);
	}
	
	printf("\nMaior valor: %.2f\n", maior);
	
	printf("Menor valor: %.2f\n", menor);
	
	printf("Media de todos os valores: %.2f\n", soma/n_cheques);
}
