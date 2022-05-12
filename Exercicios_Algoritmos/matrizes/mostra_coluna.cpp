#include <stdio.h>

int main (void){
	
	int mat[5][5];
	int l, c, coluna;
	
	for(l=0; l<5; l++){
		for(c=0; c<5; c++){
			printf("Informe um valor: ");
			scanf("%d", &mat[l][c]);
		}
	}
	
	printf("Digite uma coluna (0, 1, 2, 3 ou 4): ");
	scanf("%d", &coluna);
	
	for(l=0; l<5; l++){
		for(c=0; c<5; c++){
			if(c==coluna){
				printf("%d", mat[l][c]);
			}
		}
		printf("\n");
	}
	
	/* for(linha=0; linha<5; linha++){
            printf("%d ", mat[linha][leitura]);
        }
    */    
}
