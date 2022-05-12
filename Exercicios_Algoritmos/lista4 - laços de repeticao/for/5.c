//Elaborar um programa que apresente os números da série Fibonacci até o décimo quinto termo.
// A série Fibonacci é iniciada por 0, 1. Os próximos termos são resultados das somas de seus 2 antecessores

#include <stdio.h>
#include <stdlib.h>

int main (void){

int aux1 = 0, aux2 = 1, r;

  printf("Serie Fibonacci: \n");

  for (int i = 1; i < 15; i++){

      r = aux1 + aux2;
      printf("%d\n", r);
      aux1 = aux2;
      aux2 = r;

  }

  system("pause");
}
