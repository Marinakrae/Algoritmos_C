//Ler  um  número  inteiro  e  imprimir  uma  mensagem  informando  se  ele  é  par  e  divisível totalmente divisível por 3.

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int n;

	printf("Insira um numero inteiro: \n");
	scanf("%d", &n);

	if(n%2==0 & n%3==0)
		printf("O numero informado eh par e divisivel totalmente por 3 ao mesmo tempo\n");
	else
		printf("O numero informado nao eh par e divisivel totalmente por 3 ao mesmo tempo \n");

	system("pause");
}
