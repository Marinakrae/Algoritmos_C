// Elaborar um programa que leia um n√∫mero inteiro positivo e apresente o fatorial deste n√∫mero.

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	 int n, fat=1, aux=1;

	//n - o numero original
	// fat - a soma total do fat
	// aux - o n que vai descresecendo

	printf("Informe um numero inteiro positivo: ");  //n! = n . (n ñ 1).(n ñ 2)
	scanf("%d", &n);

	aux = n; //aux comeÁa em n e vai descrescendo atÈ 1

	while (aux>1) { //enquanto n for maior do que 1

			fat = fat * aux;  // fat È a mult anterior pelo novo n

			aux--;
		
	}
		
	printf("\n%d! = %d \n \n", n, fat);
	
	system("Pause"); 

}
