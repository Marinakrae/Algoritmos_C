#include <stdio.h>

int main (void) {

	float vet1[10], vet2[10];
	int ok, a=0; //a sera o contador das casas do vetor 2

	for(int i=0; i<10; i++) {

		printf("Informe um preco:");
		scanf("%f", &vet1[i]);
	}

	for(int i=0; i<10; i++) {

		ok=0;
		
		for(int j=0; j<10; j++) { //teste de todas as casas
			if(vet1[i]==vet2[j]) {
				ok++;
			}
		}
		
		if(ok<1) {
			vet2[a] = vet1[i];
			a++;
		} 
	}

	printf("Vetor sem os precos repetidos:\n");

	for(int i=0; i<a; i++) {
		printf("%.2f ", vet2[i]);
	}
}
