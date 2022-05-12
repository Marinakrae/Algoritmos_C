#include <stdio.h>

void Junta(int *pV1, int *pV2){
	
	int V3[13], cont=0;
	
	for(int i=0; i<5; i++){
		V3[i] = *(pV1+i);
	}
	
	for(int i=5; i<13; i++){
		V3[i] = *(pV2+cont);
		cont++;
	}
	
	printf("\nVetor 3: \n");
	
	for(int i=0; i<13; i++){
		printf("%d\n", V3[i]);
	}
}

int main (void){

    int V1[5], V2[8], *pV1, *pV2;
    
    pV1 = V1;
    pV2 = V2;

    for(int i=0;i<5; i++){
        printf("Digite um numero para o vet 1: ");
        scanf("%d", &*(pV1+i));
    }
    
    for(int i=0;i<8; i++){
        printf("Digite um numero para o vet 2: ");
        scanf("%d", &*(pV2+i));
    }

    Junta(pV1, pV2);

}
