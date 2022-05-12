
#include <stdio.h>
#include <stdlib.h>

int main (void){

  int n1, n2, tent=0;

  printf("Informe o numero que devera ser adivinhado: \n");
  scanf("%d", &n1);
  system("cls");

  do {

  printf("Informe um numero: ");
  scanf("%d", &n2);

  if(n2>n1){
    printf(" \nO numero eh menor!\n");
  }

  if(n2<n1){
    printf("O numero eh maior!\n \n");
  }

  tent++;

} while (n2!=n1);

printf("\nParabens, vc conseguiu! (depois de %d tentativas)\n \n", tent);

  system("Pause");
}
