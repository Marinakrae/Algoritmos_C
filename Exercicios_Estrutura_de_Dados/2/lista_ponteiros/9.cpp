#include <stdio.h>

int main (void){
	
	int vetA[6], vetB[6], vetC[6], vetD[6], aux=0, aux2=0;
	int *pA, *pB, *pC, *pD;
	
	pA = vetA;
	pB = vetB;
	pC = vetC;
	pD = vetD;
	
	for(int i=0; i<6; i++){ //popular vetor A
		printf("Informe um valor para vetor A: \n");
		scanf("%d", &*(pA+i));
	}
	
	for(int i=0; i<6; i++){ //popular  vetor B
		printf("Informe um valor para vetor B: \n");
		scanf("%d", &*(pB+i));
	}
	
	for(int i=0; i<6; i++){ //popular vetor C (indices impar de A e pares de B)
		
		if(i%2 != 0){
			*(pC+aux) = *(pA+i);
			*(pC+(aux+1)) = *(pB+i);
			aux = aux+2;
		} else {
			*(pD+aux2) = *(pA+i);
			*(pD+(aux+2)) = *(pB+i);
			aux2 = aux2+2;
		}
	}
	
	for(int i=0; i<6; i++){
		printf("%d ", vetC[i]);
	}
	printf("\n");
	for(int i=0; i<6; i++){
		printf("%d ", vetD[i]);
	}
}
