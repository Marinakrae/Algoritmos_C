#include <stdio.h>

int main (void){
	
	char mat[20][20]; //mudar pra 20/20
	int l, c, n=0;
	
	for(l=0; l<20; l++){
		for(c=0; c<20; c++){
			
			scanf("%c", &mat[l][c]);
			fgetc(stdin);
			
			n++;
			
			if(l==c){ //principal
				
				mat[l][c] = ' '; 
				
			}
			
			
			if(l+c == 19) {
				
				mat[l][c] = ' '; 
			}
			
		}
	}
	
	printf("\n");
	
	for(l=0; l<20; l++){
		for(c=0; c<20; c++){
			
			printf("%c ", mat[l][c]);
			
		}
		
		printf("\n");
	}
	
}
