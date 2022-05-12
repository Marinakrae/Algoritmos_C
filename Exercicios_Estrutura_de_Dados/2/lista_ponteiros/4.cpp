#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int dobro(int *vNumA){

    int *vNumB, numB[15], i;
    vNumB = numB;
    
    for(i=0; i<15; i++){
        *(vNumB+i) = pow(*(vNumA+i), 2);
    }

    for(i=0; i<15; i++){
        printf("\nVetor A: %d", *(vNumA+i));
    }

    for(i=0; i<15; i++){
        printf("\nVetor B: %d", *(vNumB+i));
    }

}


int main (void){

    int numA[15], i=0;
    int *vNumA;
    vNumA = numA;

    for(i=0;i<15; i++){
        printf("Digite um numero: ");
        scanf("%d", &*(vNumA+i));
    }

    dobro(vNumA);

}
