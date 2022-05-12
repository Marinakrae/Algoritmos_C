#include <stdio.h>

int main (void){
	
	int mat[8][8];
	int l, c, maior=0, soma;
	
	for(l=0; l<8; l++){
		for(c=0; c<8; c++){
			printf("Informe um valor: ");
			scanf("%d", &mat[l][c]);
			
			if(l==c){
				if(mat[l][c] > maior){
					maior = mat[l][c];
				}
			}
		}
	}
	
	//diagonal secundaria
	
	l=7;
	
	for(c=0; c<8; c++){
		soma = soma + mat[l][c];
		l--;
	}

	printf("O maior elemento da diagonal principal eh: %d", maior);
	printf("\nA soma dos elementos da diagonal secundaria eh: %d", soma);
}
