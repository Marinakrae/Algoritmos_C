#include <stdio.h>

int main (void){
	
	int mat[2][3];
	int mat2[2][3];
	int l, c;
	
	for(l=0; l<2; l++){
		for(c=0; c<3; c++){
			scanf("%d", &mat[l][c]);
			mat2[l][c] = mat[l][c];
		}
	}
	
	for(l=0; l<2; l++){
		for(c=0; c<3; c++){
			printf("%d ", mat2[l][c]);
		}
	printf("\n");
	}
	
}
