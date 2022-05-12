#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int n;
	
	printf("Informe um numero positivo par: ");
	scanf("%d", &n);
	
	while (n>=0) {
		if (n%2==0) { //eh par
			printf("\n%d", n);
		}
		n--;
	}
	
	printf("\n \n");

	system("pause");
}
