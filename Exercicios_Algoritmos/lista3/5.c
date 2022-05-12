//Um usuário deseja um algoritmo onde possa escolher que tipo de média deseja calcular a partirde três notas.
// Faça um programa que leia as notas, a opção escolhida pelo usuário e calcule a média.

#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	float n1, n2, n3;
	int m;
	
	printf("Informe 3 notas: \n");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	printf("Qual opcao de media voce prefere: \n 1 - Media aritmetica 2 - Media aritmetica \n");
	scanf("%d", &m);
	
	switch(m){
		case 1:{
			printf("A media eh: %.2f \n", (n1+n2+n3)/3);
			break;
		}
		case 2:{
			printf("A media eh %.2f \n", (n1 * 3 + n2 * 3 + n3 * 4)/10);
			break;
		}
	}
	
	system("pause");
}
