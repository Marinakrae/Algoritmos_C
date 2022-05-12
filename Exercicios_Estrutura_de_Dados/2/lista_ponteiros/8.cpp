#include <stdio.h>
#include <stdlib.h>

int soma(int *pVetA){

    int *pVetB, vetB[5], n, som;
    
    pVetB = vetB;
    
    for(int i=0;i<5;i++){
    	
		n = *(pVetA+i);
		
		for(som = 1; n > 1; n = n - 1){
			som = som + n;
		}
		
		*(pVetB+i) = som;	
	}

    for(int i=0; i<5; i++){
        printf("\n%d", *(pVetB+i));
    }

}

int main (void){

    int vetA[5];
    int *pVetA;
    pVetA = vetA;

    for(int i=0;i<5; i++){
        printf("Digite um numero: ");
        scanf("%d", &*(pVetA+i));
    }

    soma(pVetA);

}
