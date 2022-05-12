#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int i=10;

	while (i>=0) {
		printf("%d \n", i);
		i--;
	}

	if(i==-1) {
		printf("FIM! \n");
	}


	system("pause");
}
