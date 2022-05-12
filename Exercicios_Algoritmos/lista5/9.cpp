#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	//60 s - 1 min
	//1s - x n
	//3600s - 1 h
	//1s - x h
	int seg;
	
	printf("Informe um valor inteiro em segundos: ");
	scanf("%d", &seg);
		
	printf("%d segundos equivale a %dh ", seg, seg/3600);
	seg = seg%3600;
	
	printf("%dmin ", seg/60);
	seg = seg%60;
	
	printf("%dseg \n", seg);
	
	system("pause");
}
