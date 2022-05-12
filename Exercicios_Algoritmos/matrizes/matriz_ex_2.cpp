#include <stdio.h>

int main (void){
	
	float mat[4][5];
	int l, c;
	
	for(l=0; l<4; l++){
		for(c=0; c<5; c++){
			scanf("%f", &mat[l][c]);
		}
	}
	
	for(l=0; l<4; l++){
		for( c=0; c<5; c++){
			printf("%.2f ", mat[l][c]);
		}
		printf("\n");
	}
}
