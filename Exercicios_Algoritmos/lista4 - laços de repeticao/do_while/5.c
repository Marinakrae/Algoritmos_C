//Elaborar um programa que apresente os N n√∫meros primos. Onde N √© informado pelo usu√°rio.

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int n, div, num=2, cont_resto, cont_total=1;

	printf("Informe o numero de primos que deseja ver representados: ");
	scanf("%d", &n);

	do {  
	    
	    div = 1;
	    cont_resto = 0;

		 do { //do que testa a divis„o

			if (num % div == 0) { // se 2 div por 1 È 0
				cont_resto++; //add 1 ao contador
			}

			div++; //add 1 ao div
			
		} while(div<=num); //o div vai atÈ o valor do num

		if (cont_resto == 2) { //so aceita 2, ele mesmo e o 1
			printf("%d\n", num);
			cont_total++;
		}
		
		num++; //prox num

	} while(cont_total<=n);

	system("Pause");

}
