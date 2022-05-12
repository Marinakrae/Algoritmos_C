#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int a, b, div, cont_resto, soma=0;

	printf("Informe os valores de a e b: \n");
	scanf("%d %d", &a, &b); 
	
	for(int i = a; i <= b; i++){
		
		div = 1; //divisor do numero 
	    cont_resto = 0; //add +1 se a divisao da resto 0 

		 do { //do que testa a divisão

			if (i % div == 0) { // se 2 div por 1 é 0
				cont_resto++; //add 1 ao contador
			}

			div++; //add 1 ao div
			
		} while(div<=i); //o div vai até o valor do num

		if (cont_resto == 2) { //so aceita 2, ele mesmo e o 1
			soma = soma + i;
		}
		
	}
	
	printf("A soma de todos os primos entre %d e %d eh %d \n", a, b, soma);

	system("Pause");

}
