#include <stdio.h>

void Popula (int vet1[5]) {

	int vet2[5], soma;

	for(int i=0; i<5; i++) { //posicoes vet2

		soma=0;

		for(int j=1; j<=vet1[i]; j++) {
			soma = soma + j;
		}

		vet2[i] = soma;
	}

	printf("Vetor 2: \n");

	for(int i=0; i<5; i++) {
		printf("%d ", vet2[i]);
	}

}

int main (void) {

	int vet1[5];

	for(int i=0; i<5; i++) {

		printf("Informe um valor: ");
		scanf("%d", &vet1[i]);
	}

	Popula(vet1);
}
