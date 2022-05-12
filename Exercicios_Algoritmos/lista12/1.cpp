#include <stdio.h>

int main (void){
	
	int j1, j2;
	
	printf("Informe a jogada dos jogadores (papel - 1), (pedra - 2), (tesoura - 3) \n");
	
	printf("Jogador 1: ");
	scanf("%d", &j1);
	
	printf("Jogador 2: ");
	scanf("%d", &j2);
	
	if (j1 == j2) {
		printf ("Empate! \n");
	} else 
	
	if (j1==1){ //j1 = papel
		if (j2==2){
			printf("Jogador 1 vence");
		} else if (j2==3){
			printf("Jogador 2 vence");
		}
	} else if (j1==2){ //j1 = pedra
		if (j2==1){
			printf("Jogador 2 vence");
		} else if (j2==3){
			printf("Jogador 1 vence");
		}
	} else if (j1==3){ //j1 = tesoura
		if (j2==1){
			printf("Jogador 1 vence");
		} else if (j2==2){
			printf("Jogador 2 vence");
		}
	} 	
}
