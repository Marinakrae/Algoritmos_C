//Fazer um algoritmo que leia e verifique se três valores (a,b,c) podem ser os comprimentos dos lados de um triângulo,
// escrevendo o tipo do triângulo (equilátero, isósceles, escaleno).


#include <stdio.h>
#include <stdlib.h>

int main (void) {

	float a, b, c;
	int continuar=1; //1 = sim e 0  = nao

	printf("Informe os lados do triangulo: \n");
	scanf("%f %f %f", &a, &b, &c);

	//teste do maior lado
	if (a > b && a > c) { //a é o maior lado
	
		if (b+c <= a) {
			printf("Nao eh triangulo \n");
			continuar = 0;
		}

	} else if (b > a && b > c) { //b é o maior lado
		if (a+c  <= b) {
			printf ("Nao eh triangulo \n");
			continuar = 0;
		}
	} else if (c > a && c > b) { //c é o maior lado{
		if (a+b <= c) {
			printf("Nao eh triangulo \n");
			continuar = 0;
		}
	}


	if (continuar == 1 ) { //ele eh um triangulo

		if(a == b && b == c) { //tds com tamanho igual
			printf ("Equilatero \n");
		} else if (a == b || c == a || b == c) { // dois com tamanhos iguais
			printf("Isosceles \n");
		} else if (a != b && a != c && b != c) { //tds diferentes
			printf("Escaleno \n");
		}
	}

	system("pause");
}
