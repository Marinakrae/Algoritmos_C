//Fazer um algoritmo que leia duas notas para cada um dos vinte alunos de uma turma e escreva amédia aritmética de cada aluno.

#include <stdio.h>
#include <stdlib.h>

int main (void){

float n1, n2;

  for (int i = 0; i < 20; i++){
      printf("Insira a 1 nota do aluno: \n");
      scanf("%f", &n1);
      printf("Insira a 2 nota do aluno: \n");
      scanf("%f", &n2);

      printf("A media do aluno eh %.2f: \n", (n1+n2)/2);
  }

  system("pause");
}
