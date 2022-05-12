#include <stdio.h>

int main (void){
	
	char vet[10];
	
	for(int i=0; i<10; i++){
		if(i%2==0){
			vet[i]= 'P';
		} else {
			vet[i] = 'I';
		}
	}
	
	printf("Vetor: \n");
	
	for(int i=0; i<10; i++){
		printf("%c ", vet[i]);
	}
}
