#include <stdio.h>

int main (void){
	
	int vetA[8], vetB[8], vetC[16], i=0, aux;
	
	while(i<8){
		printf("Informe um valor para o vetor A:");
		scanf("%d", &aux);
		if(aux%2==0 && aux%3==0){
			vetA[i]=aux;
			vetC[i]=vetA[i];
			i++;
		} else {
			printf("Valor invalido!\n");
		}
	}
	
	i=0;
	while(i<8){
		printf("Informe um valor para o vetor B:");
		scanf("%d", &aux);
		if(aux%5==0){
			vetB[i]=aux;
			vetC[i+8]=vetB[i];
			i++;
		} else {
			printf("Valor invalido!\n");
		}
	}
	
	printf("Vetor C:\n");
	
	for(int i=0; i<16; i++){
		printf("%d ", vetC[i]);
	}
	
}
