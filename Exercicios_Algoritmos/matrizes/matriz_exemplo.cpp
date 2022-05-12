#include <stdio.h>

int main (void){
	
	int mat[3][3];
	int  linha, coluna;
	
	for(linha=0; linha<3; linha++){
		for(coluna=0; coluna<3; coluna++){
			scanf("%d", &mat[linha][coluna]);
		}
	}
	
	for(linha=0; linha<3; linha++){
		for(coluna=0; coluna<3; coluna++){
			printf("%d", mat[linha[coluna]]);
		}
		printf("\n");
	}
}
