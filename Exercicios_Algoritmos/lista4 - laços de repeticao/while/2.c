//Ler informações sobre 10 pessoas de um grupo.
//Para cada pessoa deve ser lida a altura e o sexo.
//Fazer um algoritmo que calcule e mostre
// A maior e a menor altura do grupo
//A média das alturas das mulheres;
//A média das alturas de todos do grupo.

#include <stdio.h>
#include <stdlib.h>

int main (void){

  float alt=0, menor_a=3, maior_a=0, alt_m=0, alt_todos=0;
  int i=0, cont_m=0;
  char sexo;

  while (i<10){

    printf("Informe a altura: \n");
    scanf("%f", &alt);
    fflush(stdin);
    printf("Informe o sexo: \n");
    scanf("%c", &sexo);
    fflush(stdin);

    alt_todos = alt_todos + alt;

    if(alt > maior_a){
      maior_a = alt;
    }

    if(alt < menor_a){
      menor_a = alt;
    }

    if(sexo == 'f' || sexo == 'F'){
      cont_m++;
      alt_m = alt_m + alt;
    }

    i++;

  }

  printf(" A maior altura do grupo eh %.2f. \n A menor eh %.2f. \n A media de altura das mulheres eh %.2f \n A media de altura de todos eh %.2f \n",
  maior_a, menor_a, alt_m/cont_m, alt_todos/10);

  system("Pause");
}
