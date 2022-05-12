//Escreva um algoritmo que informe quais números inteiros que divididos por 11 tem resto igual a 5, no intervalo de 1000 a 1999.

#include <stdio.h>
#include <stdlib.h>

int main (void){

  int i=1000;

  printf("Numeros inteiros que divididos por 11 tem resto igual a 5, no intervalo de 1000 a 1999: \n");

  while(i <= 1999){
      if(i%11==5){
        printf("%d\n", i);
      }
      i++;
  }

  system("Pause");

}
