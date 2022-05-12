#include <stdio.h>

int main (void) {
	
	int A[5], B[5];
	int *pA, *pB;
	
	pA = A;
	pB = B;
	
	printf("Informe 5 valores: \n");
	
	for(int i=0; i<5; i++){
		scanf("%d", &*(pA+i));
	}
	
	for(int i=0; i<5; i++){
		*(pB+i) = *(pA+i);
	}
	
	for(int i=0; i<5; i++){
		printf("%d\n", *(pB+i));
	}

}
