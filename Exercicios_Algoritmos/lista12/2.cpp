#include <stdio.h>

int main (void){
	
	int numero, operacao;
	float saldo, valor;
	
	printf("Informe o numero da conta bancaria: ");
	scanf("%d", &numero);
	
	printf("Informe o saldo: ");
	scanf("%f", &saldo);
	
	printf("Informe o tipo de operacao a ser realizada (1 - deposito) (2 - retirada): ");
	scanf("%d", &operacao);
	
	printf("Informe o valor da operacao: ");
	scanf("%f", &valor);
	
	if (operacao == 1){
		saldo = saldo + valor;
	} else if (operacao == 2){
		saldo = saldo - valor;
	}
	
	printf ("Novo saldo: R$%.2f \n", saldo);
	
	if(saldo < 0){
		printf("Conta estourada");
	}
}
