//Criar um programa para apresentar o quadrado dos números inteiros de 15 a 100.

#include <stdio.h>
#include <stdlib.h>

int main (void) {

  printf ("O quadrado dos numeros inteiros de 15 a 100: \n");

  for (int i = 15; i <= 100; i++){

    printf ("%d * %d = %d \n", i , i , i*i);

  }

  system("pause");
}
