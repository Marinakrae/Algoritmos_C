#include<stdio.h>

int main (void) {

	int vet[15], total=0;

	for(int i=0; i<15; i++) {

		printf("Informe um valor:");
		scanf("%d", &vet[i]);

		if(vet[i]>5) {
			total++;
		}
	}

	printf("Total de numeros digitados maiores que 5: %d \n", total);

}
