#include "operacoes.h"
#include <stdlib.h>
#include <stdio.h>

int main (void) {

	int sai=0, opcao;
	float n1, n2;

	while(sai==0) {

		printf("Selecione a operacao desejada: \n 1-Adicao\n 2-Subtracao\n 3-Multiplicacao\n 4-Divisao\n 5-Sair\n");
		scanf("%d", &opcao);

		if(opcao==5) {

			sai++;

		} else {

			if(opcao > 0 && opcao < 5) {

				printf("Insira dois numeros:\n");
				scanf("%f %f", &n1, &n2);

				switch(opcao) {
					case 1: {
						adicao(n1,n2);
						break;
					}
					case 2: {
						subtracao(n1,n2);
						break;
					}
					case 3: {
						multiplicacao(n1,n2);
						break;
					}
					case 4: {
						divisao(n1,n2);
						break;
					}
					default: {
						break;
					}
				}
			} else {
				printf("Opcao invalida!\n");
				pausa();
			}
		}

	}

	system("pause");
}

