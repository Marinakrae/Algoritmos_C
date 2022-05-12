//usando ponteiro, popule um vetor até que o numero -1 seja informado e depois apresente o vetor

#include <stdio.h>

int main (void){
	
	int *p, vet[100], i=0;
	p=vet;
	
	while((p+i)!=-1){
		printf("Informe um numero: ");
		scanf("%d", &*(p+i));
		i++;
	} 
	
	/*for(int i=0; i<100; i++){
		printf("Informe um numero: ");
		scanf("%d", &*(p+i));
		
		if(*(p+i) == -1){
			break;
		}
	} */
	
	for(int j=0; j<i; j++){
		printf("%d ", vet[j]);
	}
}
