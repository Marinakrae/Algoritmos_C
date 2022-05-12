#include <stdio.h>

int main (void){
	
	int v1=1, v2=2, *pV1=&v1, *pV2=&v2;
	
	printf("%x\n", pV1);
	printf("%x\n", pV2);
	
	//o com c ta na frente pq c=12 em hexa
	
	if(pV1 > pV2){
		printf("O maior endereco eh o pV1: %x\n", pV1);
	} else{
		printf("O maior endereco eh o pV2: %x\n", pV2);	
	}
}
