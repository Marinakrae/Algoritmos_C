#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int n;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &n);
	
	printf("Antecessor de %d - %d \n", n, n-1);
	
	printf("Sucessor de %d - %d \n", n, n+1);
	
	system("pause");
}
