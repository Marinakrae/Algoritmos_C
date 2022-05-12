//Ler diversos números e mostrar quantos deles são ímpares. O valor -999 é o código para fim de entrada.

#include <stdio.h>
#include <stdlib.h>

int main (void){

  int n, cont_impar=0;

  while (n!=-999){

    printf("Informe um numero: \n");
    scanf("%d", &n);

    if(n%2!=0 && n!=-999){
      cont_impar++;
    }

  }

  printf("%d numeros sao impares\n", cont_impar);

  system("Pause");
}
