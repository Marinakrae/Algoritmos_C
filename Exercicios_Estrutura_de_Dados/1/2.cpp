#include <stdio.h>

int main (void){
	
	float mat[10][10]; 
	int l, c;
	
	for(l=0; l<10; l++){
		for(c=0; c<10; c++){
			
			scanf("%f", &mat[l][c]);
			
		}
	}
	
	printf("Informe a linha e coluna do elemento que deseja ver: \n");
	scanf("%d %d", &l, &c);
	
	printf("Elemento: %.2f", mat[l][c]);
}
