#include <stdio.h>
#include <string.h>

int main (void){
	
	int a, b;
	
	printf("Informe 2 valores booleanos: \n");
	scanf("%d", &a);
	scanf("%d", &b);
	
	if(a==b && a==1){
		printf("Ambos verdadeiros");
	} else if(a==b && a==0){
		printf("Ambos falsos");
	} else {
		printf("Os valores sao diferentes");
	}
}
