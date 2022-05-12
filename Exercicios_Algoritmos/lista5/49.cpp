#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int n, div, num=2, cont_resto, cont_total=1, soma=0;

	printf("Informe um numero inteiro nao negativo: ");
	scanf("%d", &n);

	do {  
	    
	    div = 1;
	    cont_resto = 0;

		 do { //do que testa a divisão

			if (num % div == 0) { // se 2 div por 1 é 0
				cont_resto++; //add 1 ao contador
			}

			div++; //add 1 ao div
			
		} while(div<=num); //o div vai até o valor do num

		if (cont_resto == 2) { //so aceita 2, ele mesmo e o 1
			soma = soma + num;
			cont_total++;
		}
		
		num++; //prox num

	} while(cont_total<=n);
	
	printf("A soma dos %d primeiros numeros primos eh %d \n", n, soma);

	system("Pause");

}
