//Desenvolver um programa que apresente todos os números divisíveis por 4 que sejam menoresque 200

#include <stdio.h>
#include <stdio.h>

int main (void){

  printf("Todos os numeros divisiveis por 4 menores que 200: \n");

  for (int i = 0; i < 200; i++){
    if(i%4==0){
      printf("%d \n", i);
    }
  }

  system("pause");
}
