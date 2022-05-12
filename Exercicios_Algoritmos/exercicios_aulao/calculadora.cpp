#include <stdio.h>

int main (void){
	
	int a, b;
	char operacao;
	float resultado;
	
	printf("Informe dois valores: \n");
	scanf ("%d %d", &a, &b);
	
	setbuf(stdin, NULL); //sujeira no teclado
	
	printf("Informe a operacao: + soma, - subtracao, * multiplicacao, / divisao: \n");
	scanf("%c", &operacao);
	
	setbuf(stdin, NULL); //sujeira no teclado
	
	if(operacao == '+'){
		resultado = a+b;
	} else if(operacao == '-'){
		resultado = a-b;
	} else if(operacao == '*'){
		resultado = a*b;
	} else if(operacao == '/'){
		resultado = a/b;
	} else {
		printf("Operacao invalida\n");
	}
	
	printf("Resultado = %.2f", resultado);
}
