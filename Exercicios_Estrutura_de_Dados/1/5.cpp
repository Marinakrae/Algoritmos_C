#include <stdio.h>
#include <string.h>

int main (void){
	
	char vet[10];
	int mudou=1, aux, retorno;
	
	for(int i=0; i<10; i++){
		
		printf("Informe um caractere: ");
		scanf("%c", &vet[i]);
		fgetc(stdin);
		
	}
	
	for(int i=0; i<10; i++){ //pega 1 e compara com todos
		
		for(int j=0; j<i; j++){
		
			if(vet[i] > vet[j]){ 
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
								
			}
		}
		
	}
	
	for(int i=0; i<10; i++){
		
		printf("%c ", vet[i]);
		
	}
	
}

