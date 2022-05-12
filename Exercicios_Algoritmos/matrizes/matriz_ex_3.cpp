#include <stdio.h>

int main(void){
	
	float mat[3][3];
	int l, c;
	
	for(l=0; l<3; l++){
		for(c=0; c<3; c++){
			scanf("%f", &mat[l][c]);
		}
	}
	
	
	printf("\n%.2f \n%.2f", mat[0][0], mat[2][2]);
	
}
