// Fazer um algoritmo que leia números inteiros ate que seja informado zero,
// o qual deve ser desconsiderado e apos escreva quantos números informados
//são negativos, e a média aritmética dosnúmeros maiores que zero

#include <stdio.h>
#include <stdlib.h>

int main (void){

  int n, cont_neg=0, cont_pos=0;
  float med=0;

  do {
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    if(n<0){
      cont_neg++;
    }
    else if (n!=0) {
      cont_pos++;
      med = med + n;
    }

  } while (n!=0);

printf("\n%d numeros informados sao negativos\n", cont_neg);
printf("A media dos numeros maiores que 0 eh %.2f\n", med/cont_pos);

system("Pause");

}
