#include <stdio.h>
#include <stdlib.h>

int main (void) {

	float sal;
	
	printf("Informe o salario do funcionario: \n");
	scanf("%f", &sal);
	
	printf("O novo salario eh R$%.2f \n", sal+(sal*0.25));

	system("Pause");

}
