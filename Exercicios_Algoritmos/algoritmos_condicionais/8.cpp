#include <stdio.h>
#include <string.h>

int main (void){
	
	int a, b, c;
	
	printf("Informe um valor: ");
	scanf("%d", &a);
	printf("Informe um valor: ");
	scanf("%d", &b);
	printf("Informe um valor: ");
	scanf("%d", &c);
	
	if(a>b && a>c){
		printf("%d ", a);
		if(b>c){
			printf("%d ", b);
			printf("%d ", c);
		} else {
			printf("%d ", c);
			printf("%d ", b);
		}
	} else if(b>a && b>c) {
		printf("%d ", b);
		if(a>c){
			printf("%d ", a);
			printf("%d ", c);
		} else {
			printf("%d ", c);
			printf("%d ", a);
		}
	} else if(c>a && c>b){
		printf("%d ", c);
		if(b>a){
			printf("%d ", b);
			printf("%d ", a);
		} else {
			printf("%d ", a);
			printf("%d ", b);
		}
	}
}
