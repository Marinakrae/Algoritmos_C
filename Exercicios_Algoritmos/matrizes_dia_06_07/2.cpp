#include <stdio.h>

int main (void)  {
	
	float mat[4][3];
	int l, c, l_user, c_user;
	
	for(l=0; l<4; l++){
		for(c=0; c<3; c++){
			scanf("%f", &mat[l][c]);
		}
	}	
	
	printf("\nInforme uma linha (comecando em 0): ");
	scanf("%d", &l_user);
	printf("Informe uma coluna (comecando em 0): ");
	scanf("%d", &c_user);
	
	printf("O elemento localizado nessa posicao eh: %.2f", mat[l_user][c_user]);
	
}
