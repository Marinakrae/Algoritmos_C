#include <stdio.h>

int main (void){
	
	int saque, resto, n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0;
	
	printf("Insira o valor do saque realizado pelo cliente: \n");
	scanf("%d", &saque); //238
	
	n100 = saque/100; //2
	saque = saque - n100*100; //238-200=38
	n50 = saque/50; //0
	saque = saque - n50*50; 
	n20 = saque/20; //1
	saque = saque - n20*20; //18
	n10 = saque/10; //1
	saque = saque - n10*10; //8
	n5 = saque/5; //1
	saque = saque - n5*5; //3
	n2 = saque/2; //1
	saque = saque - n2*2; //1
	n1 = saque/1; //1
	saque = saque - n1*1;	//1
	
	printf("Sairao notas de :\n100 = %d\n50 = %d\n20= %d\n10 = %d\n5= %d\n2 = %d\n1 = %d\n",n100, n50, n20, n10,n5,n2,n1);
}
