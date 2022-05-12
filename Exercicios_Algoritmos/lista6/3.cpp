#include<stdio.h>
#include<stdlib.h>

void Idade_dias (){
	int a, m, d;
	printf("Informe a idade em anos, meses e dias: \n");
	scanf("%d %d %d", &a, &m ,&d);
	
	printf("A idade em dias eh: %d\n", (a*365)+(m*30)+d);
	
}


int main (void){
	
	Idade_dias();
		
	system("pause");
}
