#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial(int *vNumA){

    long int *vNumB, numB[15], i, fat, n;
    vNumB = numB;
    
    for(i=0;i<15;i++){
    	
		n = *(vNumA+i);
		
		for(fat = 1; n > 1; n = n - 1){
			fat = fat * n;
		}
		
		*(vNumB+i) = fat;	
	}
	
	for(i=0; i<15; i++){
        printf("\nVetor A: %li", *(vNumA+i));
        
    }
  
    for(i=0; i<15; i++){
        printf("\nVetor B: %li", *(vNumB+i));
        
    }

}

int main (void){

    int *vNumA, numA[15], i=0;
    vNumA = numA;

    for(i=0;i<15; i++){
        printf("Digite um numero: ");
        scanf("%d", &*(vNumA+i));

    }

    fatorial(vNumA);

}

