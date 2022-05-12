#include <stdio.h>

int main (void) {

	int N, total_A, q_A=0, q_B=0, q_C=0;
	float valor;

	printf("Informe a quantidade de areia necessaria na construtora: ");
	scanf("%d", &N);

	printf("Informe a quantidade disponivel na empresa A: ");
	scanf("%d", &total_A);

	if (N > total_A) { //a A n dara conta

		q_A = total_A;

		N = N - total_A;

		if (N > 10) { //se for comprar de B

			q_B = N;

		} else {

			q_C = N;
		}

	} else { //a A dara conta
		q_A = N;

	}

	valor = q_A*100 + q_B*102 + q_C*104;

	printf("Serao comprados %d da empresa A, %d da empresa B e %d da empresa C\n", q_A, q_B, q_C);
	printf("O custo total para a construtora sera de R$%.2f", valor);
}
