#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int n, soma=0, div=10, resto=0; //div vai de 10 ate 1000000000 (enquanto n for maior que ele)
	
	printf("Informe um numero inteiro maior do que zero:\n");
	scanf("%d", &n);
	
	//ir dividindo o numero
	//um int tem ate 10 algarismos
	 
	while(n>div){ //se 12>10
		resto = n%div; //resto = 2
		soma = soma + resto; //soma = 2
		n = n - resto; //n = 10
		div = div*10; //div=100
	}
	
	soma = soma + n/1000; //milhar 1,25 (1)
	resto = n%1000; //resto = 250 
	soma = soma + resto/100;  0
	resto = n%100; //centena 0
	soma = soma + n/1000; 
	resto = n%10; //unidade
	
	for(int i = 1; i<n; i++){
		if(i>div){
			soma = soma + i%div;
		}
		div = div - 10;
	} 
	
	printf("Soma dos algarismos de %d: %f \n", n, soma);
		
	system("pause");
}

entre 9 e 100 
entre 99 e 1000
>999 e <10000

