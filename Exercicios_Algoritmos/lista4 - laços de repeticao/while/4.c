// Elaborar um programa que leia um número inteiro positivo e apresente o fatorial deste número.

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	 int n, fat=1, aux=1;

	//n - o numero original
	// fat - a soma total do fat
	// aux - o n que vai descresecendo

	printf("Informe um numero inteiro positivo: ");  //n! = n . (n � 1).(n � 2)
	scanf("%d", &n);

	aux = n; //aux come�a em n e vai descrescendo at� 1

	while (aux>1) { //enquanto n for maior do que 1

			fat = fat * aux;  // fat � a mult anterior pelo novo n

			aux--;
		
	}
		
	printf("\n%d! = %d \n \n", n, fat);
	
	system("Pause"); 

}
