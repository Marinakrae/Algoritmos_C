//Apresentar os resultados das potências de 3, variando do expoente 0 até o expoente 15

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (void){

  printf("Potencias de 3, de 0 a 15: \n");

  for(int i = 0; i <15; i++){
    int p = pow(3,i);
    printf("%d \n", p);
  }

  system("pause");
}
