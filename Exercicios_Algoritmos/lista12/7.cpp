#include <stdio.h>

int main (void) {
	
	int n_planeta;
	float peso;
	
	printf("Informe o peso na Terra: ");
	scanf("%f", &peso);
	
	printf("Informe o numero do planeta: ");
	scanf("%d", &n_planeta);
	
	switch(n_planeta){
		
		case 1: {
			printf("O peso em Mercurio eh %.2f ", (peso/10)*0.37);
			break;
		}
		case 2: {
			printf("O peso em Venus eh %.2f ", (peso/10)*0.88);
			break;
		}
		case 3: {
			printf("O peso em Marte eh %.2f ", (peso/10)*0.38);
			break;
		}
		case 4: {
			printf("O peso em Jupiter eh %.2f ", (peso/10)*2.64);
			break;
		}
		case 5: {
			printf("O peso em Saturno eh %.2f ", (peso/10)*1.15);
			break;
		}
		case 6: {
			printf("O peso em Urano eh %.2f ", (peso/10)*1.17);
			break;
		}
		default: {
			printf("Numero invalido! ");
			break;
		}
	}
}
