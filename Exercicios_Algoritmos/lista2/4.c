//Criar  um  programa  que  l�  um  n�mero  inteiro  e  exibe  a  mensagem  dizendo  se  ele  �
// totalmente divis�vel por7 (resto 0) ou n�o.

#include<stdio.h>
#include<stdlib.h>

int main (void){
	
	int n;
	
	printf("Insira um numero inteiro: \n");
	scanf("%d", &n);
	
	if(n%7==0)
	printf("O numero informado eh totalmente divisivel por 7 \n");
	else
	printf("O numero informado nao eh totalmente divisivel por 7 \n");
	
	system("pause");
}
