#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	float n1, n2;
	int o;
	
	printf("Selecione a operacao matematica desejada: \n 1 - soma \n 2 - subtracao \n 3 - multiplicacao \n 4 - divisao \n");
	scanf("%d", &o);
	
	printf("Informe dois valores numericos:\n");
	scanf("%f %f", &n1, &n2);
	
	switch(o){
		case 1: {
			printf("A soma dos numeros eh %.2f \n", n1+n2);
			break;
		}case 2: {
			printf("A subtracao dos numeros eh %.2f \n", n1-n2);
			break;
		}case 3: {
			printf("A multiplicacao dos numeros eh %.2f \n", n1*n2);
			break;
		}case 4: {
			printf("A divisao dos numeros eh %.2f \n", n1/n2);
			break;
		}default:{
			printf("Valor invalido! \n");
			break;
		}
	}
				
	system("pause");
}
