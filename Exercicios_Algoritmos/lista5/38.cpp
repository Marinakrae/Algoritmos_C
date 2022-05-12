#include <stdio.h>
#include <stdlib.h>

int main (void) {

	float n1, n2;
	int o, saida=0;

	while (saida == 0) {

		printf("Escolha uma opcao: \n 1 - Adicao \n 2 - Subtracao \n 3 - multiplicacao \n 4 - Divisao \n 5 - Saida \n");
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
			case 5: {
				saida = 1;
				break;
			}
			default: {
				printf("Opcao invalida! \n");
				break;
			}
		}
	}

	system("pause");
}
