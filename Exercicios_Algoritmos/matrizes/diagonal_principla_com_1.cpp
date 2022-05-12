#include <stdio.h>

int main (void){
	
	int mat[5][5];
	
	for(int l=0; l<5; l++){
		
		for(int c=0; c<5; c++){
			
			if(l==c){
				mat[l][c] = 1;
			} else{
				mat[l][c] = 0;
			}
		}
	}
	
	for(int l=0; l<5; l++){
		
		for(int c=0; c<5; c++){
			
			printf("%d ", mat[l][c]);
		}
		
		printf("\n");
	}
}
