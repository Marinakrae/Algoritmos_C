#include <stdio.h>

int main (void){
	
	int j1, j2;
	
	printf("Jogadas: papel (1) pedra (2) tesoura (3) \n");
	
	printf ("Informe a jogada do jogador 1: ");
	scanf ("%d", &j1);
	
	printf ("Informe a jogada do jogador 2: ");
	scanf ("%d", &j2);
	
	if(j1==j2){
		printf("Empate\n");
	}
	
	if(j1==1){ //1
		if(j2==1){
			printf("Empate \n");
		} else if(j2==2){
			printf("Jogador 1 venceu \n");
		} else if(j2==3){
			printf("Jogador 2 venceu \n");
		} 
	}
	if(j1==2){ //2
		if(j2==1){
			printf("Jogador 2 venceu \n");
		} else if(j2==2){
			printf("Empate \n");
		} else if(j2==3){
			printf("Jogador 1 venceu \n");
		} 
	}
	
	if(j1==2){ //3
		if(j2==1){
			printf("Jogador 1 venceu \n");
		} else if(j2==2){
			printf("Jogador 2 venceu \n");
		} else if(j2==3){
			printf("Empate \n");
		} 
	}
	
}
