#include <stdio.h>
#include <stdlib.h>

void Quadrado_limitado(int k){
	
	printf("O quadrado de todos os numeros inteiros maiores que 0 e menores que %d: \n", k);
	
	for(int i=1; i<k; i++){
		printf("%d\n", i*i);
	}
}

int main (void){
	
	int k;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &k);
	
	Quadrado_limitado(k);
	
	system("pause");
}
