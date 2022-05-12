#include <stdio.h>

int main (void){
	
	int mat[5][5];
	int l, c, soma=0, cont_c=0;
	
	//diagonal principal - 1, 7, 13, 19, 25 = 65
	//01 02 03 04 05
	//06 07 08 09 10
	//11 12 13 14 15
	//16 17 18 19 20
	//21 22 23 24 25
	
	for(l=0; l<5; l++){
		for(c=0; c<5; c++){
			scanf("%d", &mat[l][c]);
			
			if(cont_c==c){
				soma = soma+mat[l][c];
			}
		}
		cont_c++;
	}
	
	//ou
	// soma = soma + mat[l][l] pq quando linha e coluna sao iguais, é a diagonal
	
	printf("Soma dos elementos da diagonal principal:  %d", soma);
}
