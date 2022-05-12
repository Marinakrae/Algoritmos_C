#include <stdio.h>

void Inverte(float *pNums){
		
	for(int i=4; i>-1; i--){
		printf("%.2f\n", *(pNums+i));
	}
}

int main (void){

    float nums[5], *pNums;
    
    pNums = nums;

    for(int i=0;i<5; i++){
        printf("Digite um numero real: ");
        scanf("%f", &*(pNums+i));

    }

    Inverte(pNums);

}
