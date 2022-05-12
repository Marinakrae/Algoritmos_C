#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int imprimiu=0;
	
	printf("Os 5 primeiros multiplos de 3 sao: \n");
	
	for (int i = 1 ; imprimiu < 5 ; i++){
		if(i%3==0){
			printf("%d \n", i);
			imprimiu++;
		}
	}
					
	system("pause");
}
