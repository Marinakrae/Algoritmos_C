#include <stdio.h>
#include <stdlib.h>

int main (void) {

	float s=0.0, i=1.0, j=1.0; // j dividendo e i divisor

	while (i <= 50.0 && j <= 99.0) {
		
		s = s + j/i;
		j = j+2.0;
		i++;

	}

	printf("O valor de S eh: %.2f \n", s);
	system("pause");
}
