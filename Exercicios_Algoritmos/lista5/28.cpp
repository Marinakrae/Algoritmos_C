#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int i=0;

	while (i<100000) {
		i=i+1000;
		printf("%d \n", i);
	}

	system("pause");
}
