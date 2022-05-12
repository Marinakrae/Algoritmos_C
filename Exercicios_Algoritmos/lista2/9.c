//Um  professor  resolveu  considerar,  para  cálculo  da média final  do  semestre,  
//somente  as duas maiores notas das três provas realizadas pelos alunos.
// Para auxiliá-lo, deve-se fazer um algoritmo que leia as três notas de um aluno 
//e escreva a média aritmética considerando apenas as suas duas maiores notas

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float n1, n2, n3, media;
	
	printf("Insira as tres notas do aluno: \n");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	if (n1 < n2 && n1 < n3){
		media = (n2+n3) / 2;
	} else if (n2 < n1 && n2 < n3) {
		media = (n1+n3)/2;
	} else if (n3 < n1 && n3 < n2) {
		media = (n1+n2)/2;
	}
	
	printf ("A media aritmetica do aluno eh %.2f \n", media);
	
	system("pause");
}
