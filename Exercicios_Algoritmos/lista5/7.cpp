#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int n;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &n);
	
	printf("A soma do sucessor do triplo de %d com o antecessor de seu dobro eh: %d \n", n, ((n*3)+1)+((n*2)-1));
		
	system("pause");
}
