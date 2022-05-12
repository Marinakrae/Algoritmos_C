#include <stdio.h>

void PopulaVetC(int *pA, int *pB, int *pC, int cont){

	for(int i=0; i<8; i++){
		*(pC+i) = *(pA+i);
	}
	for(int i=8; i<16; i++){
		*(pC+i) = *(pB+cont);
		cont++;
	}

}

void ImprimeVetC(int *pC){
	
	for(int i=0; i<16; i++){
		printf("%d ", *(pC+i));
	}
}

int main (void){
	
	int vetA[8], vetB[8], vetC[16], aux, cont=0;
	int *pA, *pB, *pC;
	
	pA = vetA;
	pB = vetB;
	pC = vetC;
	
	for(int i=0; i<8; i++){ //popular vetor A
		printf("Informe um valor divisivel por 2 e 3 para vetor A: \n");
		scanf("%d", &aux);
		
		if(aux%2==0 && aux%3==0){
			*(pA+i) = aux;
		} else {
			printf("Numero invalido!\n");
			i--;
		}

	}
	
	for(int i=0; i<8; i++){ //popular  vetor B
		printf("Informe um valor multiplo de 5 para vetor B: \n");
		scanf("%d", &aux);
		
		if(aux%5==0){
			*(pB+i) = aux;
		} else {
			printf("Numero invalido!\n");
			i--;
		}
	}
	
	PopulaVetC(pA, pB, pC, cont);
	
	ImprimeVetC(pC);
		
}
