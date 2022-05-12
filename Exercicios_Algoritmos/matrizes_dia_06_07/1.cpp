#include <stdio.h>

int main (void) {
	
	int a[5][5], b[5][5];
	int l,c;
	
	for(l=0; l<5; l++){
		for(c=0; c<5; c++){
			printf ("Insira um valor: ");
			scanf("%d", &a[l][c]);
			
			if(l==c){
				b[l][c] = (a[l][c]) * 3;
			} else  {
				b[l][c] = (a[l][c]) * 2;
			}
		}
	}
	
	printf("\n\nMatriz B: \n\n");
	
	for(l=0; l<5; l++){
		for(c=0; c<5; c++){
			printf("%d ", b[l][c]);
		}
		
		printf("\n");
	}
	
}
