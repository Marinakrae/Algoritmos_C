#include <stdio.h>

int main (void){
	
	int vetor[10] = {10, 20, 30}, *p;
	p=vetor; //eh a mesma coisa que vetor[0]
	
	printf("%d", *(p+2));
}
