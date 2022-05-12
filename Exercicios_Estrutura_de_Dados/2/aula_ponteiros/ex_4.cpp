#include <stdio.h>

int main (void){
	
	int num, *pNum;
	num=10;
	pNum = &num;
	
	printf("conteudo pnum: %x e conteudo apontado: %d \n", pNum, *pNum);
	*pNum = *pNum + 1;
	printf("conteudo pnum: %x e conteudo apontado: %d \n", pNum, *pNum);
	
}
