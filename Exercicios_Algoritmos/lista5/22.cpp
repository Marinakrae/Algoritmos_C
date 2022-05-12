#include <stdio.h>
#include <stdlib.h>

int main (void) {

	float n1, n2;
	int o;

	printf("Escolha a opcao: \n 1 - Soma de 2 numeros \n 2 - Diferenca entre 2 numeros (maior pelo menor) \n 3 - Produto entre 2 numeros \n 4 - Divisao entre 2 numeros (o denominador nao pode ser zero) \n");
	scanf("%d", &o);

	switch(o) {
		case 1: {
			printf("Informe dois valores numericos:\n");
			scanf("%f %f", &n1, &n2);
			printf("A soma dos numeros eh %.2f \n", n1+n2);
			break;
		}
		case 2: {
			printf("Informe dois valores numericos:\n");
			scanf("%f %f", &n1, &n2);
			if (n1>n2)
				printf("A subtracao dos numeros eh %.2f \n", n1-n2);
			else
				printf("A subtracao dos numeros eh %.2f \n", n2-n1);
			break;
		}
		case 3: {
			printf("Informe dois valores numericos:\n");
			scanf("%f %f", &n1, &n2);
			printf("A multiplicacao dos numeros eh %.2f \n", n1*n2);
			break;
		}
		case 4: {
			printf("Informe dois valores numericos:\n");
			scanf("%f %f", &n1, &n2);
			printf("A divisao dos numeros eh %.2f \n", n1/n2);
			break;
		}
		default: {
			printf("Opcao invalida! \n");
			break;
		}
	}

	system("pause");
}
