#include <stdio.h>

//Nao funciona

void Crescente (int vet[5]) {

	int ok=0, crescente[5], ok2=0;

	for(int k=0; k<5; k++) { //contador vetor crescente

		for(int i=0; i<5; i++) { //contador da casa do vetor

			ok=0;

			for(int j=0; j<5; j++) { //contador da comparacao
				if(vet[i] <= vet[j]) {
					
					ok2=0;

					for(int l=0; l<5; l++) { //contador das casas que ja foram atribuidas
						if(vet[i] != crescente[l]) {
							ok2++;
						}
					}

					if(ok2==5) {
						ok++;
					}
				}
			}

			if(ok==5) {
				crescente[k] = vet[i];
			}
		}
	}

	printf("Vetor em ordem crescente: \n");

	for(int i=0; i<5; i++) {
		printf("%d ", crescente[i]);
	}
}

int main (void) {

	int vet[5];

	for(int i=0; i<5; i++) {
		printf("Informe um valor inteiro: ");
		scanf("%d", &vet[i]);
	}

	Crescente(vet);
}
