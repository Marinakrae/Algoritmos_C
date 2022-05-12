#include <stdio.h>
#include <stdlib.h>

int Positivo_negativo (int num) {

	if(num>0) {
		printf("O numero eh positivo\n");
		return 1; //positivo
	} else {
		printf("O numero eh negativo\n");
		return 2; //negativo
	}
}

int main (void) {
	int num;
	printf("Informe um numero: ");
	scanf("%d", &num);

	if (Positivo_negativo(num)==1){
		if(num%2==0){
			printf("O numero eh par\n");
		} else{
			printf("O numero eh impar\n");
		}
	}

	system("pause");
}
