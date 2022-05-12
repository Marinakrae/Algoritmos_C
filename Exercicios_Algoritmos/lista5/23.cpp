#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int idade, temp;
	
	printf("Informe a idade e o tempo de servico do trabalhador: \n");
	scanf("%d %d", &idade, &temp);
	
	if(idade>=65 || temp>=30 || (idade >= 60 && temp >= 25)){
		printf("Pode se aposentar \n");
	} else {
		printf("Nao pode se aposentar \n");
	}
					
	system("pause");
}
