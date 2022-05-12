//Desenvolva um algoritmo que efetue a leitura de valores positivos
//inteiros até que um valornegativo seja informado. Ao final, o programa deve apresentar o maior e menor valor.

#include <stdio.h>
#include <stdlib.h>

int main (void){

  int n, maior, menor=100000;

  do{
    printf("Informe um numero positivo inteiro (negativo para parar a execucao): \n");
    scanf("%d", &n);

    if(n>maior){
      maior = n;
    }
    if(n<menor && n>0){
      menor = n;
    }

  }while(n>0);

  printf("O maior numero eh %d e o menor eh %d\n", maior, menor);
  system("Pause");
}
