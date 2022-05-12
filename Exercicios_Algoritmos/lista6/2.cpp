#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Eh_primo (){
	int n, cont_p=0;
	printf("Informe um valor inteiro e positivo: \n");
	scanf("%d", &n);
	
	for(int i = 1; i<=n; i++){	
		if(n%i==0){
			cont_p++;
		}
	}
	
	if(cont_p==0){
		printf("Eh primo\n");
	} else {
		printf("Nao eh primo\n");
	}
}

int main (void){
		
	Eh_primo();
	
	system("pause");
}
