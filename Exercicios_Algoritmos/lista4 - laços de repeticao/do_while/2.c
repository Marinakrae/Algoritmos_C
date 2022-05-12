//Elaborar um programa que efetue a leitura sucessiva de valores numéricos
//e apresente no final o somatório, a média e o total de valores lidos.
// O programa deve fazer as leitura s dos valoresenquanto o usuário estiver
// fornecendo valores positivos. Ou seja, o programa deve parar quando ousuário entrar com um valor negativo

#include <stdio.h>
#include <stdlib.h>

int main (void){

  int n, som=0, tot=0;
  float media=0;

  do {
    printf("Informe um valor numerico positivo: \n");
    scanf("%d", &n);

    if (n>0) { //para n adicionar o n negativo
      som = som + n;
    }

    tot++; 

  } while(n>0);

  tot--;	
  media = som/tot;

  printf("O somatorio dos valores eh %d, a media eh %.2f e o total de valores eh %d\n", som, media, tot);

  system("Pause");
}
